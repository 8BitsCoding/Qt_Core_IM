#include <QtCore/QCoreApplication>

#include <qdebug.h>
#include <qvector.h>
#include <qalgorithms.h>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	QVector<int> list;
	list << 1 << 2 << 3 << 4;

	// Note this is depreciated(��ġ�� ��������), use STD::fill instead ... or ... save youtself some headace and use QVector.
	// qFill(list, 0);
	// �Ʒ��� ���� ������ �Ѵ�.
	list.fill(0);

	qInfo() << list;

	return a.exec();
}
