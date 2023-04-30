#include <iostream>
#include <string>
#include "./header/personne.hpp"
#include "./header/adulte.hpp"
#include "./header/enfant.hpp"
#include "./header/hotel.hpp"
#include "./header/chambre.hpp"
#include "./header/localtime.hpp"
#include <ctime>

using namespace std;

int main(int argc, char const *argv[])
{
    // Personne najoro = Personne("najoro" , "fanantenana");
    // najoro.affiche();

    // Enfant lita = Enfant("Lita" , "Kely", 19);
    // lita.affiche();

    // Adulte Rado = Adulte("Rado", "Nandrianina" , 19);
    // Rado.affiche();
    //----------------------------------
    // string adresse = "Manga Rivotra";
    // Adulte koto = Adulte("koto" , "Nandra", 22);
    // Hotel rivotra = Hotel(adresse , koto);
    // rivotra.affiche();
    
    //----------------------------------
    Hotel hotel = Hotel();

    Adulte Rado = Adulte("Rado", "Nandrianina" , 19);
    Adulte Kanto = Adulte("Kanto", "Randria" , 20);
    Adulte Mikoto = Adulte("Mikoto", "Rakoto" , 22);
    Adulte Miandry = Adulte("Miandry", "Narindra" , 33);

    //chambre (nombre lit , numero chambre , prix)
    Chambre n01 = Chambre(02, 01, 10000);
    Chambre n02 = Chambre(01, 02, 5000);
    Chambre n03 = Chambre(05, 03, 30000);
    Chambre n04 = Chambre(07, 04, 100000);
    Chambre n05 = Chambre(9, 04, 200000);
    Chambre n06 = Chambre(3, 05, 10000);
    n02.Loyer(12);
    n01.Loyer(22);
    n03.Loyer(2);

    hotel.setAdresse("lot 34$ antanetikely Ampafinaretana");
    hotel.setResponsable(Rado);
    
    hotel.ajouetEmployers(Kanto);
    hotel.ajouetEmployers(Mikoto);
    hotel.ajouetEmployers(Miandry);

    hotel.ajouetChambres(n01);
    hotel.ajouetChambres(n02);
    hotel.ajouetChambres(n03);
    hotel.ajouetChambres(n04);

    hotel.affiche();

    return 0;
}
