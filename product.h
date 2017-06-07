// product.h
#ifndef PRODUCT_H
#define PRODUCT_H
#include "expiryDate.h"
class Product
{
    string name;
    double price;
    Shipment* shipmentList;
    int capacity;
    int size;

    void erase();
    void copy(Product const& other);
    void resize();
    static const int INITIAL_CAPACITY;
    // missing ?
    Product(Product const& other);
    Product& operator=(const Product& other);
    ~Product();

    bool isExpiryDateTheSame(Shipment s1, Shipment s2);
    void sumShipments(Shipment s1, Shipment s2);

    void removeShipmentByExpiryDate(ExpiryDate const& _expiryDate);
    void addShipment(Shipment const& s);
    void update();

    Product operator-(int removeAmount);
    void removeShipment(int index);

};

#endif

