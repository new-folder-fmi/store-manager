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
    ExpiryDate(ExpiryDate const& other);

    int getYear() const;
    int getMonth() const;
    int getDay() const;

    void setYear(int _year);
    void setMonth(int _month);
    void setDay(int _day);
    void setExpiryDate(ExpiryDate const& other);//

    bool isValid(ExpiryDate const& currentDate);
};

#endif // EXPIRY_DATE_H

