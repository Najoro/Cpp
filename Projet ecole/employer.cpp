#include <iostream>
#include <string>
#include "./header/personnels/personne.hpp"
#include "./header/personnels/employer.hpp"

using namespace std;

Employer::Employer() : Personne()
{};

void Employer::setBureau(Bureau *bureau)
{
    _bureau = bureau;
}
void Employer::affiche()
{   
    Personne::affiche();
    cout << "bureau :" << _bureau << endl;
}