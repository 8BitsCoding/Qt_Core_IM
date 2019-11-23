#pragma once

#include <QObject>

class test : public QObject
{
	Q_OBJECT

public:
	explicit test(QObject *parent = nullptr);
	~test();

	void dostuff();
	void dostuff(QString param);

signals:
	void mysignal();

private slots:
	void myslot();
};
