#include "car.h"

#include "race.h"
#include "slow.h"
#include "sports.h"

car::car(QObject *parent)
	: QObject(parent)
{
}

car::~car()
{
}

car* car::make(car::Model model)
{
	QMetaEnum metaEnum = QMetaEnum::fromType<car::Model>();
	qInfo() << "Creating: " << metaEnum.valueToKey(model);

	switch (model) {
	case car::Model::SLOWCAR:
		return new slow(nullptr);
	case car::Model::SPORTSCAR:
		return new sports(nullptr);
	case car::Model::RACECAR:
		return new race(nullptr);
	}

	return new slow(nullptr);
}