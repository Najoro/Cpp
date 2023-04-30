#include <iostream>
#include <string>
#include "Personnage.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    Personne Davida = Personne("Davida");
    Personne Goliata = Personne("Goliata");
    
    Davida.etat();
    Goliata.etat();

    Davida.attaque(Goliata);
    Davida.attaque(Goliata);
    Davida.attaque(Goliata);
    Davida.attaque(Goliata);

    Goliata.etat();

    Goliata.boirePossion(200);
    
    Goliata.etat();

    return 0;
}
