#pragma once

#include <QObject>
#include <qmetaobject.h>
#include <qmetatype.h>
#include <qdebug.h>


class car : public QObject
{
	Q_OBJECT

public:
	enum Model{
		SLOWCAR,
		SPORTSCAR,
		RACECAR
	};
	Q_ENUM(Model)

	static car* make(Model model);
	virtual void drive() = 0;

	explicit car(QObject *parent = nullptr);
	~car();
};
