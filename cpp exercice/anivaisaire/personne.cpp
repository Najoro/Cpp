#include <iostream>
#include <string>
#include "personne.hpp"

using namespace std;

Personne::Personne(string nom,int age){
      m_nom = nom;
      m_age = age;
}
const string Personne::getNom(){
      return(m_nom);
}
const int Personne::getAge(){
      return(m_age);
}
void Personne::setNom(string name){
      m_nom = name;
}
void Personne::feterAnnivairsaire(){
      m_age++;
}
void Personne::compare(Personne autre){
      string grand = (m_age > autre.m_age) ? m_nom : autre.m_nom;
      cout << grand << endl;
}