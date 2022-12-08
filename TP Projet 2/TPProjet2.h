#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TPProjet2.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QLineEdit>
#include <QPlainTextEdit>

class TPProjet2 : public QMainWindow
{
    Q_OBJECT

public:
    TPProjet2(QWidget *parent = nullptr);
    ~TPProjet2();
    QSerialPort* port;

private:
    Ui::TPProjet2Class ui;

public slots:
    void onOpenPortButtonClicked();
    void onSerialPortReadyRead();
    void onSendMessageButtonClicked();
};


