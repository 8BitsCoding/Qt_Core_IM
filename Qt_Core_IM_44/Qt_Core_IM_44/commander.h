#pragma once

#include <QObject>
#include <qdebug.h>
#include <qprocess.h>

class commander : public QObject
{
	Q_OBJECT

public:
	commander(QObject *parent);
	~commander();

signals:

public slots:
	void readyRead();
	void action(QByteArray data);

private:
	QProcess proc;
	QString app;
	QString endl;
};
