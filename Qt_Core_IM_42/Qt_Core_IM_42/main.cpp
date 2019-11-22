#include <QtCore/QCoreApplication>

#include <qdebug.h>
#include <qdir.h>
#include <qprocess.h>

bool test() {
	QProcess gzip;
	gzip.start("gzip", QStringList() << "-c");
	// gzip이라는 process를 실행하는데 -c이라는 옵션을 넣는다.

	if (!gzip.waitForStarted()) return false;

	gzip.write("Qt rock!");
	gzip.closeWriteChannel();

	if (!gzip.waitForFinished()) return false;
	QByteArray result = gzip.readAll();
	qInfo() << "Result: " << result;

	return true;
}

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	if (test()) {
		qInfo() << "Compressed with gzip!";
	}
	else {
		qInfo() << "failed to use gzip";
	}

	return a.exec();
}
