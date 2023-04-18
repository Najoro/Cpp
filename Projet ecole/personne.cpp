#include <iostream>
#include "./header/personnels/personne.hpp"

using namespace std;

Personne::Personne()
{
    _nom = " ";
}

string Personne::getNom()
{
    return _nom;
}

int Personne::getId()
{
    return _id;
}

void Personne::setId(int id)
{
    _id = id;
}

void Personne::creer(int id , string nom)
{
    _id = id;
    _nom = nom;
}
void Personne::modifier(string nom)
{
    _nom = nom;
}
void Personne::affiche()
{
    cout << "id : " << _id << endl;
    cout << "nom : " << _nom << endl;
}