#include <QtCore/QCoreApplication>

#include <qdebug.h>
#include <qlist.h>
#include <qalgorithms.h>

#include "test.h"


int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	QList<test*> list;

	for (int i = 0; i < 10; i++) {
		test* t = new test();
		t->setObjectName(QString(i));

		list.append(t);
	}

	qInfo() << list.at(0);

	// Delte them all
	qDeleteAll(list);
	// �� �濡 �޸� ���� ���ش�.
	list.clear();

	return a.exec();
}
