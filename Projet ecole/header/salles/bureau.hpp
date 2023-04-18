#ifndef BUREAU_H
    #define BUREAU_H
    #include <iostream>
    #include <vector>
    #include <string>
    #include "../personnels/employer.hpp"

    class Bureau
    {
        private:
            int _idBureau;
            string _nomBureau;
            vector <Employer> _employers;
        public:
            Bureau();
            string getNom();
            //employer
            vector <Employer> getEmployers(); 
            void setEmployers(vector <Employer> employer);
            void ajouterEmployer(const Employer employer);
            void supprimerEmployer(const Employer employer);
            //-------------------
            void creerBureau(int id,string nom);
            void modifier(string nom);
            void affiche();

    };

#endif //BUREAU_H
