#ifndef UNIVERSITE_H
    #define UNIVERSITE_H
    #include <iostream>
    #include <string>
    #include <vector>
    #include "../personnels/personne.hpp"
    #include "salle.hpp"
    #include "departement.hpp"
    #include "bureau.hpp"    
    
    using namespace std;
    class Universite
    {
        private:
            string _nom;
            vector <Salle> _salles;
            vector <Departement> _departements;
            vector <Bureau> _bureaux;
        public:
            Universite();
            string getNom();
            //-----------
            void creer(string nom);
            void modifier(string nom);
            void affiche();
            //salle
            vector <Salle> getSalle();
            void setSalle(vector <Salle> salle);
            void ajouterSalle(Salle nouvelleSalle);
            void supprimeSalle();

            //departement
            vector <Departement> getDepartement();
            void setDepartement(vector <Departement> departement);
            void ajouterDepartement(Departement nouvelledepartement);
            void supprimerDepartement();
            //bureaux
            vector <Bureau> getBureaux();
            void setBureaux(vector <Bureau> bureau);
            void ajouterBureau(Bureau nouvelleBureau);
            void supprimerBureau();
    };
#endif //UNIVERSITE_H
