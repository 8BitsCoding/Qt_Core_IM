#include "person.h"

person::person(QObject *parent)
	: QObject(parent)
{
}

person::~person()
{
}

person* person::build(persontype type)
{
	person* p = new person(nullptr);
	p->m_type = type;

	return p;
}

person::persontype person::role()
{
	return m_type;
};