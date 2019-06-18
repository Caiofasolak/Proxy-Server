/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ProxyForm.h
 * Author: fasolak
 *
 * Created on 12 de Junho de 2019, 20:04
 */

#ifndef _PROXYFORM_H
#define _PROXYFORM_H

#include "ui_ProxyForm.h"

class ProxyForm : public QDialog {
    Q_OBJECT
public:
    ProxyForm();
    virtual ~ProxyForm();
public slots:
    void textChanged(const QString& text);

private:
    Ui::ProxyForm widget;
};

#endif /* _PROXYFORM_H */
