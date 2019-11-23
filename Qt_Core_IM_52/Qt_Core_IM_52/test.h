#pragma once

#include <QObject>

class test : public QObject
{
	Q_OBJECT
	Q_DISABLE_COPY(test)

public:
	explicit test(QObject *parent = nullptr);
	~test();

signals:

public slots:

};
