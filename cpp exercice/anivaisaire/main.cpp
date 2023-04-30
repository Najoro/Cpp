#include <iostream>
#include <string>
#include "personne.hpp"

using namespace std;

int main(){
      Personne rakoto = Personne("RAKOTO",22);
      Personne rabe = Personne("RABE", 30);

      rakoto.feterAnnivairsaire();
      cout << rakoto.getNom() << "-" << rakoto.getAge() << "ans" << endl;

      rakoto.compare(rabe);
      
      return 0;
}
#include <iostream>

