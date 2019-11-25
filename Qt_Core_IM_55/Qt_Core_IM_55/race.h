#pragma once

#include <QObject>
#include <qdebug.h>

#include "car.h"

class race : public car
{
	Q_OBJECT

public:

	void drive();

	explicit race(QObject *parent = nullptr);
	~race();
};
