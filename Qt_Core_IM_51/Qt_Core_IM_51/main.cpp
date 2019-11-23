#include <QtCore/QCoreApplication>

#include <qdebug.h>
#include <qmetaobject.h>
#include <qmetatype.h>
#include <qvariant.h>

#include "test.h"


void listClassInfo(QObject* obj) {
	qInfo() << obj->metaObject()->className();

	for (int i = 0; i < obj->metaObject()->classInfoCount(); i++) {
		QMetaClassInfo c = obj->metaObject()->classInfo(i);
		qInfo() << "Property: " << c.name() << " = " << c.value();
	}
}

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	test t;
	listClassInfo(&t);

	return a.exec();
}
