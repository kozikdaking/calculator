#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "calculator.h"
#include <QQmlContext>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("calculator", "Main");


    Calculator calculator;
    engine.rootContext()->setContextProperty("calculator", &calculator);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
