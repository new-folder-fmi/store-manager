#ifndef EXPIRY_DATE_H
#define EXPIRY_DATE_H

class ExpiryDate
{
private:
    int year;
    int month;
    int day;
public:
    ExpiryDate();
    ExpiryDate(int _year, int _month, int _day);

    int getYear() const;
    int getMonth() const;
    int getDay() const;

    void setYear(int _year);
    void setMonth(int _month);
    void setDay(int _day);
    void setExpiryDate(ExpiryDate const& other);//any difference between const& and const in this case?

    bool isExpired(ExpiryDate const& currentDate);
};

#endif // EXPIRY_DATE_H

