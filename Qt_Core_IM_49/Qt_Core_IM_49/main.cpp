#include <QtCore/QCoreApplication>

#include <qdebug.h>
#include <qmetaobject.h>
#include <qmetatype.h>
#include <qtimer.h>
#include "test.h"

void listProperties(QObject* obj) {
	for (int i = 0; i < obj->metaObject()->propertyCount(); i++) {
		QMetaProperty m = obj->metaObject()->property(i);
		qInfo() << "Property: " << m.name() << " is a " << m.typeName();
	}
}

void listMethods(QObject* obj) {
	for (int i = 0; i < obj->metaObject()->methodCount() ; i++) {
		QMetaMethod m = obj->metaObject()->method(i);
		qInfo() << "Method: " << m.methodSignature();
	}
}

void listChildren(QObject* obj) {
	qInfo() << "QObject: " << obj;

	foreach(QObject *child, obj->children()) {
		qInfo() << child;
		listMethods(child);
		listProperties(child);
		qInfo("");
	}
}

int main(int argc, char* argv[])
{
	QCoreApplication a(argc, argv);

	QObject parent;
	QTimer* t = new QTimer(&parent);

	// make some children
	for (int i = 0; i < 5; i++) {
		test* t = new test(&parent);
		t->setObjectName("Child: " + QString::number(i));
	}

	listChildren(&parent);

	return a.exec();
}