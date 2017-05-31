#include "Date.h"

    //OPERATIONS TO A SINGLE DATE


//Date& Date::operator+  (const int daysToAdd)
//{

//}
void Date::operator+= (const int daysToAdd)
{

}
void Date::operator++ (const int daysToAdd)
{

}
void Date::operator-  (const int daysToSubtract)
{

}
void Date::operator-= (const int daysToSubtract)
{

}
void Date::operator-- (const int daysToSubtract)
{

}

void Date::operator*  (const int monthsToAdd)
{

}
void Date::operator*= (const int monthsToAdd)
{

}
void Date::operator/  (const int monthsToSubtract)
{

}
void Date::operator/= (const int monthsToSubtract)
{

}

void Date::operator&  (const int yearsToAdd)
{

}
void Date::operator&= (const int yearsToAdd)
{

}
void Date::operator|  (const int yearsToSubtract)
{

}
void Date::operator|= (const int yearsToSubtract)
{

}

void Date::operator^  (const int weeksToAdd)
{

}
void Date::operator^= (const int weeksToAdd)
{

}
void Date::operator%  (const int weeksToSubtract)
{

}
void Date::operator%= (const int weeksToSubtract)
{

}


    //DIFFERENCE BETWEEN TWO DATES
long long int Date::operator- (const Date& other)
{

} //DAYS
long long int Date::operator/ (const Date& other)
{

} //MONTHS
long long int Date::operator| (const Date& other)
{

} //YEARS
long long int Date::operator% (const Date& other)
{

} //WEEKS


//STANDARD I/O OPERATORS
std::ostream& operator<< (std::ostream& os , const Date& obj)
{


    os<<"Date: ";

    if (obj.getFormatType() == Date::DD_MM_YYYY)
    {
        os<<obj.getDay()<<"."<<obj.getMonth()<<"."<<obj.getYear()<<"\n";
    }
    else if (obj.getFormatType() == Date::MM_DD_YYYY)
    {
        os<<obj.getMonth()<<"."<<obj.getDay()<<"."<<obj.getYear()<<"\n";
    }
    else if (obj.getFormatType() == Date::YYYY_DD_MM)
    {
        os<<obj.getYear()<<"."<<obj.getDay()<<"."<<obj.getMonth()<<"\n";
    }
    else
    {
        os<<obj.getYear()<<"."<<obj.getMonth()<<"."<<obj.getDay()<<"\n";
    }


    if (obj.isWorkDay())
    {
        os<<"Is work day, comrade.\n\n";
    }
    else
    {
        os<<"You are free, tovarish.\n\n";
    }

    if (obj.getYear() < 1573)
    {
        os<<"WARNING: Easter date cannot be decisively calculated\nbefore the 1853 AD Gregorian calendar reforms!\n\n";
    }

    if (obj.getYear() > 2400)
    {
        os<<"WARNING: Easter date cannot be decisively calculated\nthat far into the future. Churches may decide to reform at any time!\n\n";
    }
    return os;
}

std::istream& operator>> (std::istream& is , Date& obj)
{
    unsigned short int _day , _month , _year;

    is >> _day >> _month >> _year;

    obj.setDay(_day);
    obj.setMonth(_month);
    obj.setYear(_year);

    if (obj.isValid() == false)
    {
        obj.normalize();
    }

    return is;
}
