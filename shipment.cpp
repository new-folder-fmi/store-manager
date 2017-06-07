#include "shipment.h"
        Shipment::Shipment():amount(0), ExpiryDate()
        {

        }
        Shipment::Shipment(_amount, _expiryDate):amount(_amount), ExpiryDate(_expiryDate)
        {

        }
        void setAmount(_amount)
        {
            amount = _amount;
        }
        void setExpiryDate(_expiryDate)
        {
            expiryDate = _expiryDate;
        }
        int getAmount() const
        {
            return amount;
        }
        ExpiryDate getExpiryDate() const
        {
            return expiryDate;
        }
        bool isExpired()
        {
            return (expiryDate.isVali() >= 0);
        }
        bool isEmpty()
        {
            return amount == 0;
        }
