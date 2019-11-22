#include <QtCore/QCoreApplication>

#include <qdebug.h>
#include <qvector.h>
#include <qrandom.h>

void random(QVector<int>* list, int max) {
	list->reserve(max);

	for (int i = 0; i < max; i++) {
		int value = QRandomGenerator::global()->bounded(1000);
		list->append(value);
	}
}

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	QVector<int> list;

	random(&list, 10);
	
	std::sort(list.begin(), list.end());
	
	// qSort(list);

	qInfo() << list;

	return a.exec();
}
