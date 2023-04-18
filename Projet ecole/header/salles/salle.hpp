#ifndef SALLE_H
    #define SALLE_H
    #include <iostream>
    #include <string>
    using namespace std;

    class Salle
    {
        private:
            int _id;
            string _nom;
            double _nbrSiege;
        public:
            Salle();
            void creer(int id , string nom, double nbrSiege);
            void modifier(string mom,double nbrSiege);
            void affiche();

            //-------
            int getId();
            string getnom();
            double getSiege();

            
    };

#endif //SALLE_H
