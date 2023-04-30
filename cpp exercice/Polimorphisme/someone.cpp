#include <iostream>
#include <string>
#include "someone.hpp"
/**
    Someone:: => operateur de resolution de porter
*/
Someone::Someone(const string &name) noexcept : _name(name)
{
}

string Someone::getName()
{
    return(_name);
}
void Someone::SayGoodBey()
{
    cout << _name << " ..." << endl;
}