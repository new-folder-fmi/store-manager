#ifndef SHIPMENT_H
#define SHIPMENT_H
#include "expiryDate.h"

class Shipment
{
    private:
        int amount;
        ExpiryDate expiryDate;
    public:
        Shipment();
        Shipment(_amount, _expiryDate);

        void setAmount(_amount);
        void setExpiryDate(_expiryDate);

        int getAmount() const;
        ExpiryDate getExpiryDate() const;

        bool isExpired();
        bool isEmpty();

};

#endif // SHIPMENT_H
