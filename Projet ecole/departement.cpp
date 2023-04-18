#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "header/personnels/prof.hpp"
#include "header/salles/departement.hpp"
#include "header/salles/bureau.hpp"

using namespace std;

Departement::Departement()
{};
string Departement::getNom()
{
    return _nom;
}
void Departement::creer(string nom)
{
    _nom = nom;
}

void Departement::Modifier()
{   
    string choix = " ";
    cout << "1 - supprimer une bureaux" << endl;
    cout << "2 - supprimer une profs" << endl;
    cout << "3 - ajoter une profs" << endl;
    cout << "4 - ajoter une bureaux" << endl;
    while(true)
    {
       cout << "votre choix : "<< endl;
       cin >> choix;
        if(choix == "1")
        {
            supprimerBureau();
            break;
        }else if(choix == "2")
        {
            supprimerProf();
            break;
        }else if(choix == "3")
        {
            int id;
            string nom;
            Bureau bureau;
            cout << "nom :" << nom;
            cin >> nom;
            cout << "id :" << id;
            cin >> id;
            bureau.creerBureau(id , nom);
            ajouterBureau(bureau);
            break;

        }else if(choix == "4")
        {
            int id;
            string nom;
            Prof prof;
            cout << "nom :" << nom;
            cin >> nom;
            cout << "id :" << id;
            cin >> id;
            prof.creer(id , nom);
            ajouterProf(prof);
            break;

        }
    }
    
    
}
void Departement::affiche()
{
    cout << "nom : " << _nom << endl;

    for(auto prof : _profs)
    {
        for(auto bureau : _bureaux)
        {
            cout << "le prof : " << prof.getNom();
            cout << " -> le bureau : " << bureau.getNom() << endl;
        }
    }
}

void Departement::ajouterBureau(Bureau bureau)
{
    _bureaux.push_back(bureau);
}
void Departement::supprimerBureau()
{
    _bureaux.erase(_bureaux.begin());
}

void Departement::ajouterProf(Prof prof)
{
    _profs.push_back(prof);
}
void Departement::supprimerProf()
{
     _profs.erase(_profs.begin());
}

vector <Bureau> Departement::getBureaux()
{
    return _bureaux;
}
void Departement::setBureau(vector <Bureau> bureaux)
{
    _bureaux = bureaux;
}
vector <Prof> Departement::getProf()
{
    return _profs;
}
void Departement::setProf(vector <Prof> Profs)
{
    _profs = Profs;
}