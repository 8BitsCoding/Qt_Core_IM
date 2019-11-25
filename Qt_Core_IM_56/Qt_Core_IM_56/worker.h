#pragma once

#include <QObject>
#include <qtimer.h>
#include <qrandom.h>
#include <qdebug.h>

class worker : public QObject
{
	Q_OBJECT

public:
	explicit worker(QObject *parent = nullptr);
	~worker();

	bool isBusy();

signals:
	void started();
	void finished();

public slots:
	void timeout();
	void work(int value);

private:
	QTimer m_timer;
	bool m_busy = false;
};
