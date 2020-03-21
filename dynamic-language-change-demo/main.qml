//
// Copyright (c) Dominik Prause (Inspirent) and contributors. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for details.
//
import QtQuick 2.10
import QtQuick.Controls 2.5
import QtQuick.Window 2.10

Window {
    visible: true
    height: 480; width: 640;
    title: qsTr("Dynamic Language Change Demo")
    color: "lightgrey"

    Row {
        id: languageSelector
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: parent.top; anchors.topMargin: 180
        spacing: 10
        Button {
            height: 40; width: 40
            flat: true
            onClicked: app.switchLocale("en_US")

            Image {
                id: iconUs
                anchors.centerIn: parent
                anchors.fill: parent
                source: "qrc:///resources/icon-us.svg"
            }
        }
        Button {
            height: 40; width: 40
            flat: true
            onClicked: app.switchLocale("de_DE")

            Image {
                id: iconDe
                anchors.centerIn: parent
                anchors.fill: parent
                source: "qrc:///resources/icon-de.svg"
            }
        }
    }

    Text {
        anchors { top: languageSelector.bottom; topMargin: 20; horizontalCenter: parent.horizontalCenter; }
        text: qsTr("This is english!")
        font { pixelSize: 32; bold: true; }
    }
}
