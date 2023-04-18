#ifndef EMPLOYER_H
    #define EMPLOYER_H
    #include <iostream>
    #include "personne.hpp"
    // #include "../salles/bureau.hpp"

    using namespace std;
    class Bureau;
    class Employer : public Personne
    {   
        private:
            Bureau *_bureau;
        public:
            Employer();
            void setBureau(Bureau *bureau);
            void affiche();
    };

#endif //EMPLOYER_H
