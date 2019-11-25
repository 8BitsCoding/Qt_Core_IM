#include "sports.h"

sports::sports(QObject *parent)
	: car(parent)
{
}

sports::~sports()
{
}

void sports::drive()
{
	qInfo() << "Max speed 100 mph";
}