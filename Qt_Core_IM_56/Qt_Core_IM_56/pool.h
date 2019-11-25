#pragma once

#include <QObject>
#include <Qdebug.h>
#include <qvector.h>
#include <qtimer.h>

#include "worker.h"

class pool : public QObject
{
	Q_OBJECT

public:
	explicit pool(QObject *parent = nullptr);
	~pool();

signals:

public slots:
	void work(int value);
	void started();
	void finished();
	void checkwork();

private:
	QVector<worker*> m_workers;
	QVector<int> m_work;
	QTimer m_timer;
};
