#pragma once
#include <QtWidgets>
//affiche les composant graphique et “communique” avec Traducteur.
#include "traducteur.hh"

class vue : public QWidget
{Q_OBJECT

public:
    vue();
    QSpinBox *getSpinbox1() const;
    QSpinBox *getSpinbox2() const;
    QComboBox *getCombobox() const;
    QPushButton *getEgal() const;
    QLCDNumber *getResultat() const;
    void envoi();

private:
    QSpinBox* int1;
    QSpinBox* int2;
    QComboBox* operation;
    QPushButton* egal;
    QLCDNumber* resultat;

    traducteur t;
signals:
    void signe(std::string a, int b, int c);
};

