#include "Watcher.h"

Watcher::Watcher(QObject *parent)
	: QObject(parent)
{
	fsw.addPath(QDir::currentPath());
	fsw.addPath(QDir::currentPath() + QDir::separator() + "test.txt");

	connect(&fsw, &QFileSystemWatcher::fileChanged, this, &Watcher::fileChanged);
	connect(&fsw, &QFileSystemWatcher::directoryChanged, this, &Watcher::directoryChanged);
}

Watcher::~Watcher()
{
}

void Watcher::fileChanged(const QString& path)
{
	qInfo() << "File changed: " << path;

	if (fsw.files().length()) {
		qInfo() << "Files that have changed: ";
		foreach(QString file, fsw.files()) {
			qInfo() << file;
		}
	}
}

void Watcher::directoryChanged(const QString& path)
{
	qInfo() << "directory changed: " << path;

	if (fsw.files().length()) {
		qInfo() << "Dir that have changed: ";
		foreach(QString dir, fsw.directories()) {
			qInfo() << dir;
		}
	}
}