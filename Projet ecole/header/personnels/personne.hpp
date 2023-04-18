#ifndef PERSONNE_H
    #define PERSONNE_H
    #include <iostream>
    #include <string>

    using namespace std;

    class Personne
    {
        private:
            int _id;
            string _nom;
        public:
            Personne();
            string getNom();
            int getId();
            void setId(int id);
            //---------
            void creer(int id , string nom);
            void modifier(string nom); // remplace setNom
            void affiche();
    };

#endif //PERSONNE_H
