/*
 * To change this license header, choose License Headers in Project Properti
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   ProxyForm.cpp
 * Author: fasolak
 *
 * Created on 12 de Junho de 2019, 20:04
 */

#include "ProxyForm.h"

ProxyForm::ProxyForm() {
    widget.setupUi(this);
    connect(widget.boxCliente, SIGNAL(textChanged(const QString&)), 
            this, SLOT(textChanged(const QString&)));
}

ProxyForm::~ProxyForm() {
}

void ProxyForm::textChanged(const QString& text){
    if(0 < text.simplified().length()){
        widget.boxServer->setText("Vindo do cliente :" + text.simplified() + " para o server!");
    }else
        widget.boxServer->clear();
}
