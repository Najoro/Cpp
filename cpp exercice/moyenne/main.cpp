#include <iostream>
#include "prototype.hpp"

using namespace std;


int main(){

    double notes[5];
    
    cout << "entrer vos notes" <<endl;

    input(notes, 5);
    
    cout << endl;

    display(notes, 5);
    
    cout << endl;

    cout << "vous avez : " << moyenne(notes , 5) <<" de moyenne"<< endl;

    return 0;
}
