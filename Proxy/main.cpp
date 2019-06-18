/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.cpp
 * Author: fasolak
 *
 * Created on 12 de Junho de 2019, 20:03
 */

#include <QtGui>
#include <QApplication>
#include "ProxyForm.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);

    ProxyForm form;
    form.show();

    return app.exec();
}
