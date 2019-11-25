#pragma once

#include <QObject>

class person : public QObject
{
	Q_OBJECT

public:
	enum persontype { PRINCIPAL, TEACHER, STUDENT };
	Q_ENUM(persontype)

	static person* build(persontype type);
	persontype role();

	explicit person(QObject *parent = nullptr);
	~person();

private:
	persontype m_type;
};
