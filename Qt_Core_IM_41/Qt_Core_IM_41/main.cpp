#include <QtCore/QCoreApplication>

#include <qdebug.h>
#include <qsysinfo.h>

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	QSysInfo sys;

	qInfo() << "System Info";
	qInfo() << "Boot Id: " << sys.bootUniqueId();
	qInfo() << "Build: " << sys.buildAbi();
	qInfo() << "Cpu: " << sys.buildCpuArchitecture();
	qInfo() << "Kernel: " << sys.kernelType();
	qInfo() << "Kernel Version: " << sys.kernelVersion();

	qInfo() << "Mac: " << sys.macVersion();
	qInfo() << "Windows: " << sys.windowsVersion();
	qInfo() << "Host: " << sys.machineHostName();
	qInfo() << "Product: " << sys.prettyProductName();
	qInfo() << "Type: " << sys.productType();
	qInfo() << "Version: " << sys.productVersion();

#ifdef Q_OS_LINUX
	qInfo() << "Linux code here";
#elif defined(W_OS_WIN32)
	qInfo() << "Windows code here";
#elif defined(W_OS_MACX)
	qInfo() << "MAC code here";
#else 
	qInfo() << "unknown code here";
#endif

	return a.exec();
}
