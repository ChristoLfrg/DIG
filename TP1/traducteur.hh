#pragma once
#include <QtWidgets>
#include<string>
#include"moteur.hh"

class traducteur : public QObject
{
    Q_OBJECT

private:
    moteur m;
public:
    traducteur();
    void send(std::string op, int a, int b);
    void envoi(int a);
signals:
};
