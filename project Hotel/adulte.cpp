#include <iostream>
#include <string>
#include "./header/personne.hpp"
#include "./header/adulte.hpp"

using namespace std;

Adulte::Adulte() : Personne::Personne(){}
Adulte::Adulte(string nom , string prenom , int age):Personne(nom, prenom)
{
    while(true)
    {
        if(age < 18)
        {
            cout << Personne::getNom() <<  " n'est pas Majeur :"<< endl;
            cout << "entre l'age exact  (>= 18) : "; 
            cin >> age;
            continue;
        }
        else 
        {
            setAge(age);
            break;
        }
    }
}
void Adulte::affiche()
{
    Personne::affiche();
    cout << "age : " << _age  << " ans"<< endl;
}
//age
void Adulte::setAge(int age)
{
    _age = age;
}
int Adulte::getAge()
{
    return _age;
}