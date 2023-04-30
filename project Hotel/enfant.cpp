#include <iostream>
#include <string>
#include "./header/personne.hpp"
#include "./header/enfant.hpp"

using namespace std;

Enfant::Enfant() : Personne::Personne(){}
Enfant::Enfant(string nom , string prenom , int age):Personne(nom, prenom)
{
    while(true)
    {
        if(age >= 18)
        {
            cout << Personne::getNom() <<  " n'est pas Mineur :"<< endl;
            cout << "entre l'age exact  (<= 18) : "; 
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
void Enfant::affiche()
{
    Personne::affiche();
    cout << "age : " << _age  << " ans"<< endl;
}
//age
void Enfant::setAge(int age)
{
    _age = age;
}
int Enfant::getAge()
{
    return _age;
}