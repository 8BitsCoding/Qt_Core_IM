#include <QtCore/QCoreApplication>

#include <qdebug.h>

#include "pool.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	pool p;

	for (int i = 0; i < 100; i++) {
		p.work(i);
	}

	return a.exec();
}
