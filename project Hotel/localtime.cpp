#include <iostream>
#include <ctime>
#include <string>
#include "./header/localtime.hpp"

using namespace std;

LocalTime::LocalTime()
{}
LocalTime::LocalTime(int date)
{
    setLocalTime(date);
}
void LocalTime::setLocalTime(int date)
{
    _date = date;
}
int LocalTime::getLocalTime()
{
    return _date;
}