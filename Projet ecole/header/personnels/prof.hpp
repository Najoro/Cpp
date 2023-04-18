#ifndef PROF_H
    #define PROF_H
    #include <iostream>
    #include <string>
    #include "personne.hpp"
    // #include "../salles/departement.hpp"

    using namespace std;
    class Departement;
    class Prof : protected Personne
    {
        Departement *_departement;
        public:
            Prof();
            void setDepartement(Departement *departement);
            void affiche();
            string getNom();
            void creer(int id , string nom);

    };

#endif //PROF_H
