#include "expiryDate.h"

ExpiryDate::ExpiryDate():year(0), month(0), day(0)
{
}
ExpiryDate::ExpiryDate(int _year, int _month, int _day):year(_year), month(_month), day(_day)
{
}
ExpiryDate::ExpiryDate(ExpiryDate const& other)
{
    year = other.year;
    month = other.month;
    day = other.day;
}
int ExpiryDate::getYear() const
{
    return year;
}
int ExpiryDate::getMonth() const
{
    return month;
}
int ExpiryDate::getDay() const
{
    return day;
}

void ExpiryDate::setYear(int _year)
{
    year = _year;
}
void ExpiryDate::setMonth(int _month)
{
    month = _month;
}
void ExpiryDate::setDay(int _day)
{
    day = _day;
}
void ExpiryDate::setExpiryDate(ExpiryDate const& other)
{
    year = other.year;
    month = other.month;
    day = other.day;
}
short compare(int number1, int number2)
{
    if(number1 == number2)
        return 0;
    if(number1 < number2)
        return -1;
    if(number1 > number2)
        return 1;
}

bool ExpiryDate::isValid(ExpiryDate const& currentDate)
{
    switch(compare(this->year, currentDate.year))
    {
    case -1:
        return 0;
        break;
    case 0:
        switch(compare(this->day, currentDate.day))
        {
        case -1:
            return 0;
            break;
        case 0:
            switch(compare(this->day, currentDate.day))
            {
            case -1:
                return 0;
                break;
            default:
                return 1;
                break;
            }
            break;
        case 1:
            return 1;
            break;
        }
    case 1:
        return 1;
        break;
    }

}

