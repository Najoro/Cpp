#ifndef PERSONNE_H
#define PERSONNE_H
#include <iostream>
#include <string>

using namespace std;

class Personne{
    private:
        string _nom;
        int _vie = 100;
        int _mana = 50;
        int _degaArme = 13;
    public :
        Personne(string nom);
        int getVie();
        int getmana();
        void etat();
        void recevoirDegats(int nbrDegat);
        void attaque(Personne &cible);
        void boirePossion(int quantiterPossion);
        void changeArme(string newArm , int degatArm);
        bool estVIvant();

};

#endif //PERSONNE_H
