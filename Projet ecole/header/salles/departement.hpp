#ifndef DEPARTEMENT_H
    #define DEPARTEMENT_H
    #include <iostream>
    #include <vector>
    #include <string>
    #include "../personnels/prof.hpp"
    #include "bureau.hpp"

    using namespace std;
    class Departement
    {
        private:
            string _nom = " ";
            vector <Bureau> _bureaux;
            vector <Prof> _profs;
        public:
            Departement();
            string getNom();
            void setNom(string nom);
            //-------------
            void creer(string nom); // setnom
            void Modifier();
            void affiche();
            //_bureaux
            void ajouterBureau(Bureau bureaux);
            void supprimerBureau();
            vector <Bureau> getBureaux();
            void setBureau(vector <Bureau> profs);
            //Profs
            void ajouterProf(Prof prof);
            void supprimerProf();
            vector <Prof> getProf();
            void setProf(vector <Prof> Profs);

    };

#endif //DEPARTEMENT_H
