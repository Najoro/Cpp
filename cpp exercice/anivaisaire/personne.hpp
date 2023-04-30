#ifndef PERSONNE_H
#define PERSONNE_H
#include <iostream>
#include <string>

using namespace std;

class Personne{
      private:
            string m_nom;
            int m_age;
      public :
            Personne(string nom,int age);
            const string getNom();
            const int getAge();
            void setNom(string name);
            void feterAnnivairsaire();
            void compare(Personne autre);
};

#endif