#include <iostream>
#include <string>
#include "./header/personnels/personne.hpp"
#include "./header/personnels/prof.hpp"

using namespace std;

Prof::Prof() : Personne()
{};

void Prof::setDepartement(Departement *departement)
{
    _departement = departement;
}
void Prof::affiche()
{   
    Personne::affiche();
    cout << "departement :" << _departement << endl;
}
string Prof::getNom(){
    return Personne::getNom();
}
void Prof::creer(int id , string nom)
{
    Personne::creer(id , nom);
}