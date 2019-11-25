#pragma once

#include <QObject>
#include <qdebug.h>

#include "car.h"

class sports : public car
{
	Q_OBJECT

public:
	void drive();

	explicit sports(QObject *parent = nullptr);
	~sports();
};
