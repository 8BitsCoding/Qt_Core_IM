#pragma once

#include <QObject>
#include <qdebug.h>

#include "car.h"

class slow : public car
{
	Q_OBJECT

public:
	void drive();

	explicit slow(QObject *parent = nullptr);
	~slow();
};
