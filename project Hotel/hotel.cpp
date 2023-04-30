#include <iostream>
#include <string>
#include <vector>
#include "./header/adulte.hpp"
#include "./header/chambre.hpp"
#include "./header/hotel.hpp" 
using namespace std;

Hotel::Hotel()
{}
Hotel::Hotel(string adresse, Adulte responsable)
{
    setAdresse(adresse);
    setResponsable(responsable);
}
void Hotel::affiche()
{
    cout << "-------------------" << endl;
    cout << "INFORMATION DU RESPONSABLE : " << endl;
    cout << " - Nom : "<< _responsable.getNom() << endl;
    cout << " - Prenom : "<< _responsable.getPrenom() << endl;
    cout << " - Age : "<< _responsable.getAge() << " ans "<< endl;
    cout << "-------------------" << endl;
    afficheListeEmployer();
    cout << "-------------------" << endl;
    cout << " - nombre pieces : " << getNombrePiece() << endl;
    afficheListeChambre();
}
//adresse--------------------------------------------------------
void Hotel::setAdresse(string adresse)
{
    _adresse = adresse;
}
string Hotel::getAdresse()
{
    return _adresse;
}
//nombre de pieces--------------------------------------------------------
void Hotel::setNombrePiece(int nombrePiece) 
{
    _nombrePiece = nombrePiece;
}
int Hotel::getNombrePiece()
{
    return _nombrePiece;
}
void Hotel::ajoutePiece()
{
    _nombrePiece++;
}
void Hotel::suprimerPiece()
{
    _nombrePiece--;
}
//categorie--------------------------------------------------------
void Hotel::setCategorie(string categorie)
{
    _categorie = categorie;
}
string Hotel::getCategorie()
{
    return _categorie;
}
//adulte responsable--------------------------------------------------------
void Hotel::setResponsable(Adulte responsable)
{
    _responsable = responsable;
}
Adulte Hotel::getResponsable()
{
    return _responsable;
}
//employer--------------------------------------------------------
void Hotel::setEmployers(vector <Adulte> employers)
{
    _employers = employers;
}
vector<Adulte> Hotel::getEmployers()
{
    return _employers;
}
void Hotel::ajouetEmployers(Adulte employer)
{
    _employers.push_back(employer);
}
void Hotel::supprimerEmployers()
{
    _employers.erase(_employers.begin());
}
void Hotel::afficheListeEmployer()
{
    cout << "LISTES DES EMPLOYERS : " << endl;
    for(auto employer : _employers)
    {
        cout << " - " << employer.getNom() << " " <<employer.getPrenom() << " ("<< employer.getAge() <<"ans)" << endl;
    }
}
//Chambre--------------------------------------------------------
void Hotel::setChambres(vector<Chambre> chambres)
{
    _chambres = chambres;
}
vector<Chambre> Hotel::getChambre()
{
    return _chambres;
}
void Hotel::ajouetChambres(Chambre chambre)
{
    _chambres.push_back(chambre);
    ajoutePiece();
}
void Hotel::supprimerChambres()
{
    _chambres.erase(_chambres.begin());
    suprimerPiece();
}
void Hotel::afficheListeChambre()
{
    cout << "LISTES DES CHAMBRES : " << endl;
    for(auto chambre : _chambres)
    {
        cout << " - chambre numero : ("<<chambre.getNumero() << ") | " << " prix : "<<chambre.getPrix() << "Ariary";
        if((chambre.getLoyer().getLocalTime()) != 0)
        {
            cout << " | Location : " << chambre.getLoyer().getLocalTime() << " Heure" << endl;
        }else
        {
            cout << " | pas encore reserver " <<endl;
        }
    }
}