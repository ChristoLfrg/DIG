#pragma once
#include <QtWidgets>
#include "traducteur.hh"

class vue : public QWidget
{//Q_OBJECT

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

    traducteur t;
signals:
    void send();
};

