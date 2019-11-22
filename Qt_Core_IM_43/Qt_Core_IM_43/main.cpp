#include <QtCore/QCoreApplication>

#include <qdebug.h>
#include <qprocess.h>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	qInfo() << "Starting...";
	QProcess proc;
	proc.execute("xed", QStringList() << "http://www.voidrealms.com");
	qInfo() << "Exit code: " << proc.execute();

	return a.exec();
}
