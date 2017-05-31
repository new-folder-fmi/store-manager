#include "Date.h"


//CONSTRUCTORS
Date::Date()
{
    this->day = 1;
    this->month = 1;
    this->year = 0;
}

Date::Date(const int& _day , const int& _month , const int& _year , const short int& _formatType) : day(_day) ,
                                                                                                   month(_month) ,
                                                                                                   year(_year),
                                                                                                   formatType(_formatType)
{
    if (this->isValid() == false)
    {
        this->day = 1;
        this->month = 1;
        this->year = 0;
    }
}

Date::Date(const int& _day , const int& _month , const int& _year) : day(_day) ,
                                                                     month(_month) ,
                                                                     year(_year),
                                                                     formatType(DD_MM_YYYY)
{
    if (this->isValid() == false)
    {
        this->normalize();
    }
}

//SETTERS
void Date::setDay(const int &_day)
{
    this->day = _day;
}

void Date::setMonth(const int &_month)
{
    this->month = _month;
}

void Date::setYear(const int &_year)
{
    this->year = _year;
}

void Date::setFormatType(const short int& _formatType)
{
    if (_formatType < 4)
    {
        this->formatType = _formatType;
    }
}

//GETTERS
const short int& Date::getDay () const
{
    return this->day;
}

const short int& Date::getMonth () const
{
    return this->month;
}

const short int& Date::getYear () const
{
    return this->year;
}

const short int& Date::getFormatType() const
{
    return this->formatType;
}

