#pragma once
#include <QtWidgets>
//affiche les composant graphique et “communique” avec Traducteur.

class vue : public QWidget
{
public:
    vue();
    QSpinBox *getSpinbox1() const;
    QSpinBox *getSpinbox2() const;
    QComboBox *getCombobox() const;
    QPushButton *getEgal() const;
    QLCDNumber *getResultat() const;

private:
    QSpinBox* int1;
    QSpinBox* int2;
    QComboBox* operation;
    QPushButton* egal;
    QLCDNumber* resultat;
};

