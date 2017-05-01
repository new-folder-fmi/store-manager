// product.h
#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>  //?
class Product {
  string name;
  Shipment* shipmentList;
  int capacity;
  int size;
  static const int INITIAL_CAPACITY;
  void copy(Product const&);
  void erase();
  // missing ???
  Product();
  Product(Product const&);
  Product& operator=(const Product&);
  ~Product();
  bool isExpiryDateTheSame(Shipment, Shipment);
  void sumShipments(Shipment, Shipment);
  void removeShipmentByExpiryDate(int*);
  void resize();
  void addShipment(Shipment const&);
  void update();
};

#endif  

