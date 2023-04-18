#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "header/personnels/prof.hpp"
#include "header/salles/salle.hpp"
#include "header/salles/departement.hpp"
#include "header/salles/bureau.hpp"
#include "header/salles/universite.hpp"

using namespace std;

Universite::Universite()
{
    _salles = vector <Salle> ();
    _departements = vector <Departement> ();
    _bureaux = vector <Bureau> ();
}
string Universite::getNom()
{
    return _nom;
}

void Universite::creer(string nom)
{
    _nom = nom;
}
void Universite::modifier(string nom)
{
    _nom = nom;
}
void Universite::affiche()
{
    cout << "nom de l'unversite : " << _nom << endl; 
     
    cout << "nombre des salle existant :" << _salles.size() <<endl;
    cout << "nombre des Departement existant :" << _departements.size() <<endl;
    cout << "nombre des bureaux existant :" << _bureaux.size() <<endl;
}
//salle-------------------------------------------------
vector <Salle> Universite::getSalle()
{
    return _salles;
}
void Universite::setSalle(vector <Salle> salle)
{
    _salles = salle;
}
void Universite::ajouterSalle(Salle nouvelleSalle)
{
    _salles.push_back(nouvelleSalle);
}
void Universite::supprimeSalle()
{
    _salles.erase(_salles.begin());
}
//departement-------------------------------------------------
vector <Departement> Universite::getDepartement()
{
    return _departements;
}
void Universite::setDepartement(vector <Departement> departement)
{
    _departements = departement;
}
void Universite::ajouterDepartement(Departement nouvelledepartement)
{
    _departements.push_back(nouvelledepartement);
}
void Universite::supprimerDepartement()
{
    _departements.erase(_departements.begin());
}
//bureaux-------------------------------------------------
vector <Bureau> Universite::getBureaux()
{
    return _bureaux;
}
void Universite::setBureaux(vector <Bureau> bureau)
{
    _bureaux = bureau;
}
void Universite::ajouterBureau(Bureau nouvelleBureau)
{
    _bureaux.push_back(nouvelleBureau);
}
void Universite::supprimerBureau()
{
    _bureaux.erase(_bureaux.begin());
}