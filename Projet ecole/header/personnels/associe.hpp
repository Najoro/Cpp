#ifndef ASSOCIE_H
    #define ASSOCIE_H
    #include <iostream>
    #include <string>
    #include "prof.hpp"

    class Associe : public Prof
    {
        public:
            void creer(int id , string nom);
            void modifier(string nom);
            void affiche();
    };

#endif //ASSOCIE_H
