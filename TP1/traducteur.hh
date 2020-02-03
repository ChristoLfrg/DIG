#pragma once
#include <QtWidgets>
#include<string>
#include"moteur.hh"

class traducteur : public QObject
{//Q_OBJECT

private:
    moteur m;
public:
    traducteur();
signals:
    void send();
    void calcul();
};
