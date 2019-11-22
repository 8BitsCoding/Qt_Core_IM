#include <QtCore/QCoreApplication>

#include <qdebug.h>
#include <qvector.h>
#include <qalgorithms.h>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	QVector<int> list;
	list << 1 << 2 << 3 << 4;

	// Note this is depreciated(가치가 떨어지다), use STD::fill instead ... or ... save youtself some headace and use QVector.
	// qFill(list, 0);
	// 아래와 같은 동작을 한다.
	list.fill(0);

	qInfo() << list;

	return a.exec();
}
