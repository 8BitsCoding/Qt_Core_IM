#include <QtCore/QCoreApplication>

#include <qdebug.h>
#include <qmetaobject.h>
#include <qmetatype.h>
#include <qtimer.h>
#include <qvariant.h>
#include "test.h"

void listProperties(QObject* obj) {
	for (int i = 0; i < obj->metaObject()->propertyCount(); i++) {
		QMetaProperty m = obj->metaObject()->property(i);
		qInfo() << "Property: " << m.name() << " is a " << m.typeName();
	}
}

void listMethods(QObject* obj) {
	for (int i = 0; i < obj->metaObject()->methodCount(); i++) {
		QMetaMethod m = obj->metaObject()->method(i);
		qInfo() << "Method: " << m.methodSignature();
	}
}

void listChildren(QObject* obj) {
	qInfo() << "QObject: " << obj;

	foreach(QObject * child, obj->children()) {
		qInfo() << child;
		listMethods(child);
		listProperties(child);
		qInfo("");
	}
}

void testProp(QObject* parent, QString name, QVariant value) {
	foreach(QObject * child, parent->children()) {
		child->setProperty(name.toLatin1(), value);
	}
}

int main(int argc, char* argv[])
{
	QCoreApplication a(argc, argv);

	QObject parent;
	QTimer* t = new QTimer(&parent);

	testProp(&parent, "interval", 3000);
	listChildren(&parent);

	return a.exec();
}