#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int nlignes; //  nombre total de ligne
    int nl; // compteur de ligne
    int nesp; // nombre d'espaces precedent les etoiles
    int j;

    cout << "nombre de ligne :";
    cin >> nlignes;

    for(nl = 0 ; nl < nlignes ; nl++){
        nesp = nlignes - nl - 1;
        for(j = 0 ; j < nesp ; j++) cout << '-';
        for(j = 0 ; j < 2*nl + 1 ; j++) cout << '*';
        cout << '\n';
    }

    return 0;
}

