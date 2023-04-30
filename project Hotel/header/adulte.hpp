#ifndef ADULTE_H
    #define ADULTE_H
    #include <iostream>
    #include <string>
    #include "personne.hpp"

    using namespace std;

    class Adulte : public Personne
    {
        private :
            int _age;
        public :
            Adulte();
            Adulte(string nom , string prenom , int age);
            void affiche();
            //age
            void setAge(int age);
            int getAge();

    };

#endif //ADULTE_H
