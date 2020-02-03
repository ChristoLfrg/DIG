#include "vue.hh"
#include<iostream>

vue::vue() :
    QWidget(),
    int1(new QSpinBox(this)),
    int2(new QSpinBox(this)),
    operation(new QComboBox(this)),
    egal(new QPushButton("=", this)),
    resultat(new QLCDNumber(this))
{
    operation->addItem("+");
    operation->addItem("-");
    operation->addItem("*");
    operation->addItem("/");

    QHBoxLayout* layout = new QHBoxLayout;
    layout->addWidget(int1);
    layout->addWidget(operation);
    layout->addWidget(int2);
    layout->addWidget(egal);
    layout->addWidget(resultat);

    layout->setMargin(50);
    layout->setSpacing(100);

    setLayout(layout);

    QObject::connect(
                egal, &QPushButton::clicked,    // connecte le signal clicked() de egal
                this, &vue::send);              // au slot send() de vue

}

QSpinBox *vue::getSpinbox1() const
{
    return int1;
}

QSpinBox *vue::getSpinbox2() const
{
    return int2;
}

QComboBox *vue::getCombobox() const
{
    return operation;
}

QPushButton *vue::getEgal() const
{
    return egal;
}

QLCDNumber *vue::getResultat() const
{
    return resultat;
}

void vue::send()
{
    std::cout << "vue::send\n";
    emit t.send();
}

