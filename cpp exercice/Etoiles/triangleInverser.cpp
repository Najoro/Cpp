#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int hauteur; 
    int espaces;
    int etoile;
    int i,j;
    
    cout << "hauteur : ";
    cin >> hauteur;

    hauteur =hauteur/2 + 1;

    for(i = 1 ; i <= hauteur; i++){
        espaces = hauteur - i;
        etoile = hauteur - espaces;

        for(j = 0 ; j < etoile ; j++) cout << "*";
        for(j = 0 ; j < espaces ; j++) cout << " ";

        cout << "\n";
    }
    for(i = 1 ; i <= hauteur; i++){
        etoile = hauteur - i;
        espaces = hauteur - espaces;

        for(j = 0 ; j < etoile ; j++) cout << "*";
        for(j = 0 ; j < espaces ; j++) cout << " ";

        cout << "\n";
    }
    return 0;
}
