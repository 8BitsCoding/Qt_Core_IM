#include <QtCore/QCoreApplication>

#include <qdebug.h>

// Custon macro
#define add(a, b) a+b

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	// Easy ... but dangerous
	qInfo() << add(1, 2);			// 3

	// Lets break it
	qInfo() << add("test", 22);		// ������ �̻��� ���ڰ� ���

	qInfo() << add(true, true);		// 2

	// qInfo() << add("test","\n");// Error

	return a.exec();
}
