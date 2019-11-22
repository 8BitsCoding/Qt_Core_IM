#pragma once

#include <QObject>

class test : public QObject
{
	Q_OBJECT

public:
	explicit test(QObject *parent = nullptr);
	~test();
};
