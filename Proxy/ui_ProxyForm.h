/********************************************************************************
** Form generated from reading UI file 'ProxyForm.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROXYFORM_H
#define UI_PROXYFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ProxyForm
{
public:
    QLabel *cliente;
    QLabel *server;
    QPushButton *enviar;
    QPushButton *spider;
    QPushButton *dump;
    QTextEdit *boxCliente;
    QTextEdit *boxServer;

    void setupUi(QDialog *ProxyForm)
    {
        if (ProxyForm->objectName().isEmpty())
            ProxyForm->setObjectName(QStringLiteral("ProxyForm"));
        ProxyForm->resize(710, 587);
        cliente = new QLabel(ProxyForm);
        cliente->setObjectName(QStringLiteral("cliente"));
        cliente->setGeometry(QRect(10, 20, 61, 21));
        server = new QLabel(ProxyForm);
        server->setObjectName(QStringLiteral("server"));
        server->setGeometry(QRect(360, 20, 71, 21));
        enviar = new QPushButton(ProxyForm);
        enviar->setObjectName(QStringLiteral("enviar"));
        enviar->setGeometry(QRect(10, 540, 88, 27));
        spider = new QPushButton(ProxyForm);
        spider->setObjectName(QStringLiteral("spider"));
        spider->setGeometry(QRect(300, 540, 88, 27));
        dump = new QPushButton(ProxyForm);
        dump->setObjectName(QStringLiteral("dump"));
        dump->setGeometry(QRect(600, 540, 88, 27));
        boxCliente = new QTextEdit(ProxyForm);
        boxCliente->setObjectName(QStringLiteral("boxCliente"));
        boxCliente->setGeometry(QRect(10, 50, 331, 471));
        boxServer = new QTextEdit(ProxyForm);
        boxServer->setObjectName(QStringLiteral("boxServer"));
        boxServer->setGeometry(QRect(360, 50, 331, 471));

        retranslateUi(ProxyForm);

        QMetaObject::connectSlotsByName(ProxyForm);
    } // setupUi

    void retranslateUi(QDialog *ProxyForm)
    {
        ProxyForm->setWindowTitle(QApplication::translate("ProxyForm", "ProxyForm", 0));
        cliente->setText(QApplication::translate("ProxyForm", "Cliente:", 0));
        server->setText(QApplication::translate("ProxyForm", "Server:", 0));
        enviar->setText(QApplication::translate("ProxyForm", "Enviar", 0));
        spider->setText(QApplication::translate("ProxyForm", "Spider", 0));
        dump->setText(QApplication::translate("ProxyForm", "Dump", 0));
    } // retranslateUi

};

namespace Ui {
    class ProxyForm: public Ui_ProxyForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROXYFORM_H
