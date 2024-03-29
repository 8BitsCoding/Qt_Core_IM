#include "worker.h"

worker::worker(QObject *parent)
	: QObject(parent)
{
}

worker::~worker()
{
}


void worker::timeout()
{
	m_busy = false;
	emit finished();
}

void worker::work(int value)
{
	m_busy = true;

	qInfo() << "Starting work: " << QString::number(value);
	int num = QRandomGenerator::global()->bounded(1000, 5000);

	m_timer.singleShot(num, this, &worker::timeout);

	emit started();
}


bool worker::isBusy()
{
	return m_busy;
}