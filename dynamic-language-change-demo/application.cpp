//
// Copyright (c) Dominik Prause (Inspirent) and contributors. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for details.
//
#include "application.h"

Application::Application(int &argc, char **argv)
    : QGuiApplication(argc, argv)
{
    mTranslator = new QTranslator(this);
}

void Application::switchLocale(const QString &locale)
{
    if (!mTranslator->isEmpty())
        QCoreApplication::removeTranslator(mTranslator);

    mTranslator->load(QStringLiteral(":/translations/") + locale);
    QCoreApplication::installTranslator(mTranslator);

    mQmlEngine->retranslate();
}

void Application::setQmlEngine(QQmlEngine *qmlEngine)
{
    if(!qmlEngine)
        return;

    mQmlEngine = qmlEngine;
}
