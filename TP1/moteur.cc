#include "moteur.hh"

moteur::moteur()
{

}

int moteur::calcul(string const& operation, int const& int1, int const& int2){
    if (operation == "+"){
        return int1+int2;
    }
    if (operation == "-"){
        return int1-int2;
    }
    if (operation == "/"){
        if (int2->value() == 0) {
            return 0;
        }
        else int1/int2;
    }
    if (operation == "*"){
        return int1*int2;
    }
}
