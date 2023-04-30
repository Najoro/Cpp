#ifndef CHAMBRE_H
    #define CHAMBRE_H
    #include <iostream>
    #include <string>
    #include "localtime.hpp"
    #include "adulte.hpp"
    
    class Chambre
    {
        private:
            int _nombreLit;
            int _numero;
            double _prix;
            LocalTime _date;
        public:
            Chambre();
            Chambre(int nombreLit , int numero , double prix);
            //nombre lit
            void setNombreLit(int nombreLit);
            int getNombreLit();
            //numero du chambre
            void setNumero(int numero);
            int getNumero();
            //pix du chambre
            void setPrix(double prix);
            double getPrix();
            //estloyer
            void Loyer(LocalTime date);
            LocalTime getLoyer();
    };
#endif //CHAMBRE_H
