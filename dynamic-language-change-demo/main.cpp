//
// Copyright (c) Dominik Prause (Inspirent) and contributors. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for details.
//
#include <QGuiApplication>
#include <QQuickView>
#include <QQmlContext>

#include "application.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    // Application is derived from QGuiApplication
    Application app(argc, argv);

    QQuickView view;
    view.rootContext()->setContextProperty("app", &app);
    view.setSource(QStringLiteral("qrc:/main.qml"));

    // We provide a reference to the QQMlEngine in order to call retranslate()
    // from within the Application class.
    app.setQmlEngine(view.engine());

    return app.exec();
}
