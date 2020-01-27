#pragma once
//fait la liaison entre Vue et Moteur.
#include <QtWidgets>
#include<string>
#include"moteur.hh"

class traducteur : public QObject
{Q_OBJECT
private:
    moteur m;
public:
    traducteur();
    void envoi();
signals:
    void egal(std::string const& operation, int const& int1, int const& int2);
};
