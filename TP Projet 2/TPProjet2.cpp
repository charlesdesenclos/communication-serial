#include "TPProjet2.h"

TPProjet2::TPProjet2(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    QList<QSerialPortInfo> availablePorts = QSerialPortInfo::availablePorts();

    for (int i = 0; i < availablePorts.size(); i++)
    {
        QSerialPortInfo info = availablePorts[i];
        ui.comboBox_port->addItem(info.portName(), QVariant(info.portName()));
    }
}

TPProjet2::~TPProjet2()
{

}

void TPProjet2::onOpenPortButtonClicked()
{
    if (ui.comboBox_port->currentIndex() >= 0)
    {
        port = new QSerialPort(ui.comboBox_port->currentText());
        QObject::connect(port, SIGNAL(readyRead()), this, SLOT(onSerialPortReadyRead()));
        port->setBaudRate(9600);
        port->setDataBits(QSerialPort::DataBits::Data8);
        port->setParity(QSerialPort::Parity::NoParity);
        port->setStopBits(QSerialPort::StopBits::OneStop);
        if (port->open(QIODevice::OpenModeFlag::ExistingOnly | QIODevice::OpenModeFlag::ReadWrite));
        {
            ui.status->setText("Status port : Ouvert");
        }

    }
}

void TPProjet2::onSerialPortReadyRead()
{
    QByteArray data = port->read(port->bytesAvailable());
    QString str(data);
    ui.textEdit_reception->insertPlainText(str);
}

void TPProjet2::onSendMessageButtonClicked()
{
    if (port->isOpen())
    {
        port->write(ui.lineEdit_message->text().toStdString().c_str());
    }
}
