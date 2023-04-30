#include <iostream>
#include "someone.hpp"
#include "english.hpp"
#include "Indonesie.hpp"

using namespace std;

int main(int argc, char const *argv[])
{
    English so{"najoro"};
    so.SayGoodBey();

    Indonesie in{"koko"};
    in.SayGoodBey();
    
    return 0;
}
