#include "moteur.hh"
#include<string>

moteur::moteur()
{

}

int moteur::resultat(std::string const& operation, int const& int1, int const& int2){
    if (operation == "+"){
        return int1+int2;
    }
    if (operation == "-"){
        return int1-int2;
    }
    if (operation == "/"){
        if (int2 == 0) {
            return 0;
        }
        else return int1/int2;
    }
    if (operation == "*"){
        return int1*int2;
    }
    else return 0;
}
