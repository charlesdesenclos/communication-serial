/********************************************************************************
** Form generated from reading UI file 'TPProjet2.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TPPROJET2_H
#define UI_TPPROJET2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TPProjet2Class
{
public:
    QWidget *centralWidget;
    QLabel *status;
    QPushButton *ouvrirport;
    QPushButton *pushButton;
    QLabel *donnee;
    QComboBox *comboBox_port;
    QLabel *label;
    QLineEdit *lineEdit_message;
    QTextEdit *textEdit_reception;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TPProjet2Class)
    {
        if (TPProjet2Class->objectName().isEmpty())
            TPProjet2Class->setObjectName(QString::fromUtf8("TPProjet2Class"));
        TPProjet2Class->resize(534, 400);
        centralWidget = new QWidget(TPProjet2Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        status = new QLabel(centralWidget);
        status->setObjectName(QString::fromUtf8("status"));
        status->setGeometry(QRect(320, 70, 101, 16));
        ouvrirport = new QPushButton(centralWidget);
        ouvrirport->setObjectName(QString::fromUtf8("ouvrirport"));
        ouvrirport->setGeometry(QRect(70, 50, 75, 23));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(350, 310, 75, 23));
        donnee = new QLabel(centralWidget);
        donnee->setObjectName(QString::fromUtf8("donnee"));
        donnee->setGeometry(QRect(70, 120, 111, 16));
        comboBox_port = new QComboBox(centralWidget);
        comboBox_port->setObjectName(QString::fromUtf8("comboBox_port"));
        comboBox_port->setGeometry(QRect(70, 10, 69, 22));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 47, 13));
        lineEdit_message = new QLineEdit(centralWidget);
        lineEdit_message->setObjectName(QString::fromUtf8("lineEdit_message"));
        lineEdit_message->setGeometry(QRect(70, 310, 261, 20));
        textEdit_reception = new QTextEdit(centralWidget);
        textEdit_reception->setObjectName(QString::fromUtf8("textEdit_reception"));
        textEdit_reception->setGeometry(QRect(70, 150, 261, 121));
        TPProjet2Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TPProjet2Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 534, 21));
        TPProjet2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TPProjet2Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        TPProjet2Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TPProjet2Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        TPProjet2Class->setStatusBar(statusBar);

        retranslateUi(TPProjet2Class);
        QObject::connect(ouvrirport, SIGNAL(clicked()), TPProjet2Class, SLOT(onOpenPortButtonClicked()));

        QMetaObject::connectSlotsByName(TPProjet2Class);
    } // setupUi

    void retranslateUi(QMainWindow *TPProjet2Class)
    {
        TPProjet2Class->setWindowTitle(QCoreApplication::translate("TPProjet2Class", "TPProjet2", nullptr));
        status->setText(QCoreApplication::translate("TPProjet2Class", "Status port : ferm\303\251", nullptr));
        ouvrirport->setText(QCoreApplication::translate("TPProjet2Class", "Ouvrir le port", nullptr));
        pushButton->setText(QCoreApplication::translate("TPProjet2Class", "Envoyer", nullptr));
        donnee->setText(QCoreApplication::translate("TPProjet2Class", "Donn\303\251es re\303\247ues :", nullptr));
        label->setText(QCoreApplication::translate("TPProjet2Class", "Port :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TPProjet2Class: public Ui_TPProjet2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TPPROJET2_H
