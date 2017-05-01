#include<iostream>
#include"Shipment.h"
using namespace std;

Shipment::Shipment():amount(0), expiryDate({00000000}), price(0.00);

int Shipment::getAmount() const
{
    return amount;
}
int Shipment::getExpiryDate() const
{
    return expiryDate;
}
double Shipment::getPrice() const
{
    return price;
}

void Shipment::setAmount(int _amount)
{
    amount = _amount;
}
void Shipment::setExpiryDate()
{
    /*to be filled*/
}
void Shipment::setPrice(int _price)
{
    price = _price;
}

bool Shipment::isExpired()
{
    /*to be filled*/
}
bool Shipment::isEmpty()
{
    return amount==0;
}
void Shipment::subtractShipment(int quantity)
{
    amount- = quantity;
}
void Shipment::read()
{
    int a;
    //expiryDate
    double p;
    cout<<"Enter amount: ";
    cin>>a;
    cout<<endl<<"Enter price: ";
    cin>>p;
    setAmount(a);
    setPrice(p);
}
void Shipment::discount()
{
    /*to be filled*/
}
