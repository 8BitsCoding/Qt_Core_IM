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

int main(int argc, char* argv[])
{
	QCoreApplication a(argc, argv);

	QVector<int> list;
	random(&list, 10);

	QVector<int> list2;
	random(&list2, 10);

	qInfo() << list;
	qInfo() << list2;

	// qInfo() << "Equal: " << qEqual(list.begin(), list.end(), list2.begin());
	// qCopy(list.begin(), list.end(), list2.begin());
	// qInfo() << "Equal2: " << qEqual(list.begin(), list.end(), list2.begin());

	qInfo() << "Equal3: " << std::equal(list.begin(), list.end(), list2.begin());
	std::copy(list.begin(), list.end(), list2.begin());
	qInfo() << "Equal4: " << std::equal(list.begin(), list.end(), list2.begin());

	return a.exec();
}
