#ifndef HOTEL_H
    #define HOTEL_H
    #include <iostream>
    #include <string>
    #include <vector>
    #include "adulte.hpp"
    #include "chambre.hpp"

    using namespace std;
    class Hotel 
    {
        private:
            string _adresse;
            int _nombrePiece = 1;
            string _categorie;
            Adulte _responsable;
            vector<Adulte> _employers;
            vector<Chambre> _chambres;
        public:
            Hotel();
            Hotel(string adresse, Adulte responsable);
            void affiche();
            //adresse
            void setAdresse(string adresse);
            string getAdresse();
            //nombre de pieces
            void setNombrePiece(int nombrePiece);
            int getNombrePiece();
            void ajoutePiece();
            void suprimerPiece();
            //categorie
            void setCategorie(string categorie);
            string getCategorie();
            //adulte responsable
            void setResponsable(Adulte responsable);
            Adulte getResponsable();
            //employer
            void setEmployers(vector <Adulte> employers);
            vector<Adulte> getEmployers();
            void ajouetEmployers(Adulte employer);
            void supprimerEmployers();
            void afficheListeEmployer();
            //Chambre
            void setChambres(vector<Chambre> chambres);
            vector<Chambre> getChambre();
            void ajouetChambres(Chambre chambre);
            void supprimerChambres();
            void afficheListeChambre();
    };

#endif //HOTEL_H
