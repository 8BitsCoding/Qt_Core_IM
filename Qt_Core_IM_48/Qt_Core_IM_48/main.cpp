#include <QtCore/QCoreApplication>

#include <qdebug.h>
#include <qmetaobject.h>
#include <qmetatype.h>
#include <qtimer.h>
#include "test.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	QObject parent;
	QTimer* t = new QTimer(&parent);

	// make some children
	for (int i = 0; i < 5; i++) {
		test* t = new test(&parent);
		t->setObjectName("Child: " + QString::number(i));
	}

	foreach(QObject * c, parent.children()) {
		qInfo() << c;
		qInfo() << c->metaObject()->className();
		qInfo() << "Inherits: " << c->inherits("test");

		for (int m = 0; m < c->metaObject()->methodCount() ; m++) {
			qInfo() << "Method: " << c->metaObject()->method(m).methodSignature();
		}
		qInfo("");
	}

	return a.exec();
}
