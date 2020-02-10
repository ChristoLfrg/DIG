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

    QObject::connect(
                this, &traducteur::send,           // connecte le signal clicked() de egal
                &t, &vue::res);               // au slot send() de vue

}

void vue::send()
{
    std::cout << "vue::send\n";
    emit t->send(this->operation->currentText().toStdString(), this->int1->value(), this->int2->value());
}

void vue::res(int a) {
    this->resultat->display(a);
}

