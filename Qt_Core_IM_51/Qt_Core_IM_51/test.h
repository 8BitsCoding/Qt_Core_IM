#pragma once

#include <QObject>

class test : public QObject
{
	Q_OBJECT

	Q_CLASSINFO("Author", "Byran Cairns")
	Q_CLASSINFO("Url", "http://www.voidrealms.com")

public:
	explicit test(QObject *parent = nullptr);
	~test();

signals:

public slots:
};
