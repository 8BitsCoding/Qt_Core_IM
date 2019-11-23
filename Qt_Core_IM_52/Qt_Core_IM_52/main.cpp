#include <QtCore/QCoreApplication>

#include <qdebug.h>

#include "test.h"

void pointerTest(QObject* o) {
	qInfo() << o;
}

void referenceTest(QObject& o) {
	qInfo() << &o;
}

void copyTest(QObject o) {
	qInfo() << &o;
}

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	test t;

	pointerTest(&t);
	referenceTest(t);
	copyTest(t);			// Error : Copy Error

	return a.exec();
}
