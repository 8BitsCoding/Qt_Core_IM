#include "test.h"

test::test(QObject *parent)
	: QObject(parent)
{
}

test::~test()
{
}


void test::dostuff()
{

}

void test::dostuff(QString param)
{
	Q_UNUSED(param);
}

void test::myslot()
{

}