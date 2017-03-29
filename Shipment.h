#ifndef SHIPMENT_H
#define SHIPMENT_H

class Shipment
{
private:
    int amount;
    //int expiryDate[8];
    //expiryDate
    double price;
public:
    Shipment();

    int getAmount() const;
    int getExpiryDate() const;
    double getPrice() const;

    void setAmount(int _amount);
    void setExpiryDate();
    void setPrice(double _price);

    bool isExpired();
    bool isEmpty();
    void subtractShipment(int quantity);
    void read();
    void discount();
};

#endif
