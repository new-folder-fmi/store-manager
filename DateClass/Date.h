#ifndef DATE_H
#define DATE_H

#include <iostream>

/**
*
*
*
*
*
*
*/
class Date
{
private:

    short int day;
    short int month;
    short int year;

    bool workDayMode;

    unsigned short int formatType;  //refer to the FormatTypes enum for reference

                   //helper function to normalize overflowing dates


public:

    //CONSTRUCTORS
    Date();                                                                                         //sets date to 1.1.0
    Date(const int& _day , const int& _month , const int& _year);                                   //custom date ctor with default format
    Date(const int& _day , const int& _month , const int& _year , const short int& _formatType);    //custom date ctor with user format

    //Date();

    //DESTRUCTOR
    //~Date();

    //SETTERS
    void setDay(const int& _day);
    void setMonth(const int& _month);
    void setYear(const int& _year);
    void setFormatType(const short int& _formatType);

    //GETTERS
    const short int& getDay() const;
    const short int& getMonth() const;
    const short int& getYear() const;
    const short int& getFormatType() const;

    //OPERATORS
        //OPERATIONS TO A SINGLE DATE
    void operator+  (const int daysToAdd);
    void operator+= (const int daysToAdd);
    void operator++ (const int daysToAdd);
    void operator-  (const int daysToSubtract);
    void operator-= (const int daysToSubtract);
    void operator-- (const int daysToSubtract);

    void operator*  (const int monthsToAdd);
    void operator*= (const int monthsToAdd);
    void operator/  (const int monthsToSubtract);
    void operator/= (const int monthsToSubtract);

    void operator&  (const int yearsToAdd);
    void operator&= (const int yearsToAdd);
    void operator|  (const int yearsToSubtract);
    void operator|= (const int yearsToSubtract);

    void operator^  (const int weeksToAdd);
    void operator^= (const int weeksToAdd);
    void operator%  (const int weeksToSubtract);
    void operator%= (const int weeksToSubtract);


        //DIFFERENCE BETWEEN TWO DATES
    long long int operator- (const Date& other); //DAYS
    long long int operator/ (const Date& other); //MONTHS
    long long int operator| (const Date& other); //YEARS
    long long int operator% (const Date& other); //WEEKS

    //SPECIFIC GETTERS
    bool isWorkDay() const;
    bool isHoliday() const;
    bool isUserHoliday() const;
    bool isEaster() const;

    bool isLeapYear() const;
    unsigned short int getDaysInMonth() const;                                    //get for current month
    unsigned short int getDaysInMonth(unsigned short int specificMonth) const;    //get for specific month


    unsigned short int getWeekDay() const;
    Date getNearestWorkDay (bool direction) const;    //0 - left , 1 - right

    //CORRECTION/VALIDATION
    bool isValid() const;
    void normalize();

    //FORMAT TYPE ENUMERATION
    enum formatTypes
    {
        DD_MM_YYYY,
        MM_DD_YYYY,
        YYYY_MM_DD,
        YYYY_DD_MM
    };

};

//STANDARD I/O OPERATORS
std::ostream& operator<< (std::ostream& os , const Date& obj);

std::istream& operator>> (std::istream& is , Date& obj);


#endif // DATE_H

/*
    SOURCES:

    Wikipedia's description of a leap year in the Gregorian calendar
    https://en.wikipedia.org/wiki/Leap_year#Gregorian_calendar

    Gauss' algorithm for weekday determination
    https://en.wikipedia.org/wiki/Determination_of_the_day_of_the_week

    List of official holidays in Bulgaria
    https://en.wikipedia.org/wiki/Public_holidays_in_Bulgaria



*/
