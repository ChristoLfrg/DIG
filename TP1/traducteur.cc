#include "traducteur.hh"
#include<iostream>



traducteur::traducteur()
{/*
    QObject::connect(
                this, &traducteur::send,      // connecte le signal clicked() de egal
                this, &vue::res);     // au slot send() de vue
*/
}

void traducteur::send(std::string op, int a, int b){
    int resultat = m.resultat(op, a, b);
    this->envoi(resultat);
}
