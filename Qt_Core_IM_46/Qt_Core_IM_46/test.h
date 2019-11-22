#pragma once

#include <QObject>
#include <qdebug.h>
#include <qtimer.h>
#include <qtimezone.h>

class test : public QObject
{
	Q_OBJECT

public:
	explicit test(QObject *parent = nullptr);
	~test();

signals:

public slots:
	void timeout();
	void dostuff();

private:
	QTimer timer;
	int number;
};
