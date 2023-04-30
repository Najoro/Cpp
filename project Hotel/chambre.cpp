#include <iostream>
#include <string>
#include "./header/chambre.hpp"
#include "./header/localtime.hpp"
#include "./header/adulte.hpp"

using namespace std;

Chambre::Chambre(){}
Chambre::Chambre(int nombreLit , int numero , double prix)
{
    setNombreLit(nombreLit);
    setNumero(numero);
    setPrix(prix);
}
//nombre lit
void Chambre::setNombreLit(int nombreLit)
{
    _nombreLit = nombreLit;
}
int Chambre::getNombreLit()
{
    return _nombreLit;
}
//numero du chambre
void Chambre::setNumero(int numero)
{
    _numero = numero;
}
int Chambre::getNumero()
{
    return _numero;
}
//pix du chambre
void Chambre::setPrix(double prix)
{
    _prix = prix;
}
double Chambre::getPrix()
{
    return _prix;
}
void Chambre::Loyer(LocalTime date)
{
    _date = date;
}
LocalTime Chambre::getLoyer()
{
    return _date;
}
