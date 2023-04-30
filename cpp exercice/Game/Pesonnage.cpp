#include <iostream>
#include <string>
#include "Personnage.hpp"

using namespace std;

Personne::Personne(string nom){
    _nom = nom;
}
//----------------------------------------------------
int Personne::getVie(){
    return(_vie);
}
//----------------------------------------------------
int Personne::getmana(){
    return(_mana);
}
//----------------------------------------------------
void Personne::etat(){
    cout << "----------------" <<endl;
    cout << "name : " << _nom << endl;
    cout << "vie : " << _vie << endl;
    cout << "mana : " << _mana <<endl;
    cout << "----------------" <<endl;
 }
//----------------------------------------------------
void Personne::recevoirDegats(int nbrDegat){
    _vie = _vie - nbrDegat;
    if(_vie < 0){
        _vie = 0;
    }
}
//----------------------------------------------------
void Personne::attaque(Personne &cible){
    cout << _nom << " attaque " << cible._nom << endl;
    cible.recevoirDegats(_degaArme);
}

void Personne::boirePossion(int quantiterPossion){
    cout << _nom << " boit du possion de " << quantiterPossion <<" vie" << endl;
    _vie += quantiterPossion;
    if(_vie >= 100){
        _vie = 100;
    }
}