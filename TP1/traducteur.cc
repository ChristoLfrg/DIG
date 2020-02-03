#include "traducteur.hh"
#include<iostream>



traducteur::traducteur()
{
    QObject::connect(
                send(), &traducteur::send,      // connecte le signal clicked() de egal
                this, &traducteur::calcul);     // au slot send() de vue

}

void traducteur::send(){
    std::cout << "traducteur::send\n";
}

void traducteur::calcul(){
    std::cout << "Calcul...\n";
}
