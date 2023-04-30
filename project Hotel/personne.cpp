#include <iostream>
#include <string>
#include "./header/personne.hpp"

using namespace std;

Personne::Personne(){}

Personne::Personne(string nom, string prenom)
{
    setNom(nom);
    setPrenom(prenom);
}
void Personne::affiche()
{
    cout << "nom : " << getNom() << endl;
    cout << "Prenom : " << getPrenom() << endl;
}
//nom
void Personne::setNom(string nom)
{
    _nom = nom;
}
string Personne::getNom()
{
    return _nom;
}

//prenom
void Personne::setPrenom(string prenom)
{
    _pernom = prenom;
}
string Personne::getPrenom()
{
    return _pernom;
}
