// product.h
#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
#include <vector>
class Product
{
  std::string name;
  std::vector<Shipment> ShipmentList;
  /*int capacity;
    int size;

    void erase();
    void copy(Product const&);
    void resize();
    static const int INITIAL_CAPACITY;
    Product();
    Product(Product const&);
    Product& operator=(const Product&);
    ~Product();
  */

  bool isExpiryDateTheSame(Shipment, Shipment);
  // void sumShipments(Shipment, Shipment);

  void removeShipmentByExpiryDate(int*);
  //  void addShipment(Shipment const&);
  void update();
};

#endif

