#include "Date.h"


bool Date::isValid() const
{
    if ( this->day<=0     || this->day > getDaysInMonth()
       ||this->month <= 0 || this->month > 12 || this->year < 0)
    {
        return false;
    }
    else return true;
}

void Date::normalize()
{

    while (this->day > this->getDaysInMonth())
    {
        this->day -= getDaysInMonth();

        this->month ++ ;

        if (this->month > 12)
        {
            this->month-=12;
            this->year++;
        }
    }

    while (this->day < 0)
    {
        this->day += getDaysInMonth((this->month - 1)%11 + 1);

        this->month -- ;

        if (this->month < 0)
        {
            this->month+=12;
            this->year--;
        }
        if (this->year < 0)
        {
            this->year = 0;
        }
    }

}

unsigned short int Date::getWeekDay() const
{
    //Get the weekday of Jan 1st, current year (Gauss)
    unsigned short int janFirst = 0;

    janFirst = ( 1 + 5*( (this->year - 1)%4 ) + 4*( (this->year - 1)%100) + 6*( (this->year - 1)%400 ) ) % 7;


    //Loop through all months, adding days in month to janFirst, then mod7 again
    for (int currMon = 1 ; currMon < this->month ; currMon++)
    {
        janFirst += getDaysInMonth(currMon);
        janFirst %= 7;
    }

    //Add the days in current month to janFirst, then mod7 again
    janFirst += this->day - 1;
    janFirst %= 7;

    return janFirst;
}

unsigned short int Date::getDaysInMonth() const
{
    return getDaysInMonth(this->month);
}

unsigned short int Date::getDaysInMonth(unsigned short int specificMonth) const
{
    if (specificMonth == 2)
    {
        return 28 + isLeapYear();
    }
    else if (specificMonth>=1 && specificMonth<=7)
    {
        return 30 + (specificMonth%2);
    }
    else
    {
        return 31 - (specificMonth%2);
    }

}

bool Date::isLeapYear() const
{
    if (this->year%4 != 0)
    {
        return false;
    }
    else if (this->year%100 != 0)
    {
        return true;
    }
    else if (this->year%400 != 0)
    {
        return false;
    }
    else return true;
}

bool Date::isWorkDay() const
{
    if (this->getWeekDay() == 6 || this->getWeekDay() == 0)  //covers SAT and SUN
    {
        return false;
    }
    else if (this->isHoliday())
    {
        return false;
    }
    else return true;
}





