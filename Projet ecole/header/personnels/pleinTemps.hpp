#ifndef PLEINtEMPS_H
    #define PLEINtEMPS_H
    #include <iostream>
    #include <string>
    #include "prof.hpp"

    class PleinTemps : public Prof
    {
        public:
            void creer(int id , string nom);
            void modifier(string nom);
            void affiche();
    };

#endif //PLEINtEMPS_H