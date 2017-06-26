#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "helloitem.h"

int main(int argc, char *argv[])
{

#ifdef Q_OS_WIN
    QCoreApplication::setAttribute(Qt::AA_UseOpenGLES);
    QCoreApplication::setAttribute(Qt::AA_ShareOpenGLContexts);
#endif

    QGuiApplication app(argc, argv);

    qmlRegisterType<HelloItem>("HelloItem", 1, 0, "HelloItem");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
