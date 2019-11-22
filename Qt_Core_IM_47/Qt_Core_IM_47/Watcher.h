#pragma once

#include <QObject>
#include <qdebug.h>
#include <qdir.h>
#include <qfilesystemwatcher.h>

class Watcher : public QObject
{
	Q_OBJECT

public:
	explicit Watcher(QObject *parent = nullptr);
	~Watcher();

signals:

public slots:
	void fileChanged(const QString & path);
	void directoryChanged(const QString& path);

private:
	QFileSystemWatcher fsw;

};
