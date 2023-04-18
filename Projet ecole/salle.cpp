#include <iostream>
#include <string>
#include "./header/salles/salle.hpp"

using namespace std;
Salle::Salle()
{};

void Salle::creer(int id , string nom, double nbrSiege)
{
    _id = id;
    _nom = nom;
    _nbrSiege = nbrSiege;
}
void Salle::modifier(string nom,double nbrSiege)
{
    _nbrSiege = nbrSiege;
    _nom = nom;
}
void Salle::affiche()
{
    cout << "id : " << _id << endl;
    cout << "nom du salle : "<< _nom << endl;
    cout << "nombre des sieges : " << _nbrSiege << " places "<< endl;
}
int Salle::getId()
{
    return _id;
}
string Salle::getnom()
{
    return _nom;
}
double Salle::getSiege()
{
    return _nbrSiege;
}