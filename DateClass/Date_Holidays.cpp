#include "Date.h"
//#include <iostream>
bool Date::isHoliday() const
{
    if (this->day == 1  &&  this->month == 1)
    {
        return true;
    }
    else if (this->day == 3  &&  this->month == 3)
    {
        return true;
    }
    else if (this->day == 1  &&  this->month == 5)
    {
        return true;
    }
    else if (this->day == 6  &&  this->month == 5)
    {
        return true;
    }
    else if (this->day == 24  &&  this->month == 5)
    {
        return true;
    }
    else if (this->day == 6  &&  this->month == 9)
    {
        return true;
    }
    else if (this->day == 22  &&  this->month == 9)
    {
        return true;
    }
    else if (this->day == 1  &&  this->month == 11)
    {
        return true;
    }
    else if (this->day >= 24  &&  this->day <= 26  && this->month == 12)
    {
        return true;
    }
    else if (this->isEaster())  //Specific every year
    {
        return true;
    }
    else if (this->isUserHoliday())
    {
        return true;
    }
    else return false;
}
bool Date::isEaster() const
{
    int a , b , c , d , e , f , g , h , i , k , l , m;
    int easterMon;
    int easterDay;

    a = this->year % 19;
    b = this->year / 100;
    c = this->year % 100;
    d = b / 4;
    e = b % 4;
    f = (b + 8) / 25;
    g = (b - f + 1) / 3;
    h = (19*a + b - d - g + 15) % 30;
    i = c / 4;
    k = c % 4;
    l = (32 + 2*e + 2*i - h - k) % 7;
    m = ( a + 11*h + 22*l ) / 451;

    easterMon = ( h + l - 7*m + 114 ) / 31;
    easterDay = ((h + l - 7*m + 114) % 31) + 1;

    if (this->month == easterMon  && this->day == easterDay)
    {
        return true;
    }
    else return false;
}

bool Date::isUserHoliday() const
{
    return false;
    //ADD A FILESYSTEM?
}
