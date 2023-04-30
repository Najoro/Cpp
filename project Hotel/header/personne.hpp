#ifndef PESONNE_H
    #define PESONNE_H
    #include <iostream>
    #include <string>
    
    using namespace std;

    class Personne
    {
        private:
            string _nom;
            string _pernom;
        public:
            Personne();
            Personne(string nom, string prenom);
            void affiche();
            //nom
            void setNom(string nom);
            string getNom();
            //prenom
            void setPrenom(string prenom);
            string getPrenom();
            
    };

#endif //PESONNE_H
