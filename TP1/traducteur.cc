#include "traducteur.hh"
#include "moteur.hh"


traducteur::traducteur()
{
    QObject::connect(s);
}

void traducteur::envoi(){
    emit m.resultat();
}
