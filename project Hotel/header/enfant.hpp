#ifndef Enfant_H
    #define Enfant_H
    #include <iostream>
    #include <string>
    #include "personne.hpp"

    using namespace std;

    class Enfant : public Personne
    {
        private :
            int _age;
        public :
            Enfant();
            Enfant(string nom , string prenom , int age);
            void affiche();
            //age
            void setAge(int age);
            int getAge();

    };

#endif //Enfant_H
