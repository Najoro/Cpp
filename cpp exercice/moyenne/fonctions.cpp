#include <iostream>
#include "prototype.hpp"

using namespace std;

double input(double table[], int dim){
    for(int i = 0 ; i < dim ; i++){
        do
        {
            cout << "[" << "entre le ( note/20 ) n * "<<i  <<"] : ";
            cin >> table[i];

        } while (table[i] > 20);
        
    }
    return table[dim];
}
void display(double table[], int dim){
    cout << endl;
    cout << "VOS NOTES SONT :" << endl;
    for(int i = 0 ; i < dim ; i++){
        cout << "note [" << i << "] :" << table[i] << endl;
    }
}
double somme(double table[] , int dimesion){
    double somme = 0;
     for(int i = 0 ; i < dimesion ; i++){
        somme += table[i];
    }

    return somme;
}
float moyenne(double table[], int dimension){
    float moyenne  = somme(table , dimension) / dimension;
    return moyenne;
}
