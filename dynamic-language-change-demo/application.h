//
// Copyright (c) Dominik Prause (Inspirent) and contributors. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for details.
//
#ifndef APPLICATION
#define APPLICATION

#include <QGuiApplication>
#include <QTranslator>
#include <QQmlEngine>

class Application : public QGuiApplication
{
    Q_OBJECT

public:
    explicit Application(int &argc, char **argv);

    Q_INVOKABLE void switchLocale(const QString &locale);

    void setQmlEngine(QQmlEngine* qmlEngine);

private:
    QTranslator* mTranslator;
    QQmlEngine* mQmlEngine;

};

#endif // APPLICATION
