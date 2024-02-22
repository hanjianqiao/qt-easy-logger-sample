#include "samplewindow.h"

#include <QApplication>
#include <qt-easy-logger/logger.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    qInstallMessageHandler(h::Logger::messageHandler);
    qDebug() << "这是测试输出";

    SampleWindow w;
    w.show();

    return a.exec();
}
