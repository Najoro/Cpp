#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "./header/salles/bureau.hpp"
#include "./header/personnels/employer.hpp"

using namespace std;
Bureau::Bureau()
{};

vector <Employer> Bureau::getEmployers()
{
    return this->_employers;
}
void Bureau::setEmployers(vector <Employer> employer)
{
    this->_employers = employer;
}
void Bureau::ajouterEmployer(const Employer employer)
{
    _employers.push_back(employer);
}
void Bureau::supprimerEmployer(const Employer employer)
{
    
}
//--------------------------------------------------
void Bureau::creerBureau(int id,string nom)
{
    _idBureau = id;
    _nomBureau = nom;
}
void Bureau::modifier(string nom)
{
    _nomBureau = nom;
}
void Bureau::affiche()
{
    cout << "nom bureaux : " << _nomBureau << endl;
    cout << "liste employer : " << "\n";
    for(auto employer : _employers)
        cout << " - " << employer.getNom() << endl;
}
string Bureau::getNom()
{
    return _nomBureau;
}