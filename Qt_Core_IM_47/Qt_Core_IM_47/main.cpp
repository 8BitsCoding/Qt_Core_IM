#include <QtCore/QCoreApplication>

#include "Watcher.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	Watcher w;


	return a.exec();
}
