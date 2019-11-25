#include "slow.h"

slow::slow(QObject *parent)
	: car(parent)
{
}

slow::~slow()
{
}

void slow::drive()
{
	qInfo() << "Max speed 50 mph";
}