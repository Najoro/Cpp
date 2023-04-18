#ifndef ADHJOINT_H
    #define ADHJOINT_H
    #include <iostream>
    #include <string>
    #include "prof.hpp"

    using namespace std;
    
    class Adjoint : public Prof
    {
        public:
            void creer(int id , string nom);
            void modifier(string nom);
            void affiche();
    };

#endif //ADHJOINT_H