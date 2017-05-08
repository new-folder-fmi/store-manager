// product.cpp
//function that checks if two shipments have the same expiry date and makes them one shipment
// operator = vs copy constructor
// http://stackoverflow.com/questions/11706040/whats-the-difference-between-assignment-operator-and-copy-constructor
// http://www.cplusplus.com/articles/y8hv0pDG/
// http://www.learncpp.com/cpp-tutorial/9-14-overloading-the-assignment-operator/

#include <vector>
#include"Product.h"//changed
#include "Shipment.h"//changed
// using namespace std; --redundant?

/*const int Product::INITIAL_CAPACITY = 8;

void Product::copy(Product const& other)
{
  strcpy(name, other.name);
  for(int i=0 ; i< INITIAL_CAPACITY; ++i)
    shipmentList[i] = other.shipmentList[i]; //ne trqbva op= v shipment
  capacity = other.capacity;
  size = other.size;
}

void Product::erase()
{
    delete[] shipmentList;
}

Product::Product()
{
  shipmentList = new Shipment[INITIAL_CAPACITY];
  name = nullptr;
  size = 0;
  capacity = INITIAL_CAPACITY;
}

Product::Product(Product const& other)
{
    copy(other);
}

Product::Product& operator=(const Product& other)
{
   if(this!=&other)
    {
        erase();
        copy(other);
    }
    return *this;
}
 Product::~Product()
 {
   erase();
 }
*/
bool Product::isExpiryDateTheSame(Shipment s1, Shipment s2)
{
  for(int i=0; i<3; i++)
  {
    if(s1.expiryDate[i] != s2.expiryDate[i])
      return false;
  }
    return true;
}

/*void Product::sumShipments(Shipment s1, Shipment s2)
{
  if(isExpiryDateTheSame(s1, s2)
     {
       s1.amount += s2.amount;
       s2.setExpiryDate({0, 0, 0});
     }
}
*/
void Product::removeShipmentByExpiryDate(int* _expiryDate)
{
  for(int i=0; i<size; i++)
  {
    if(shipmentList[i].expiryDate == _expiryDate)
  {
      for(int j=i; j<size-j; ++i)
    {
    shipmentList[j] = shipmentList[j+1];
    }
      break;
  }
}

/*void Product::resize()
{
  Shipment* oldShipmentList = shipmentList;
  shipmentList = new Product[capacity*2];//?
  for(int i=0; i<size; ++i)
  {
    shipmnetList[i] = oldShipmentList[i];
  }
  delete[] oldShipmentList;

  capacity* = 2;
}

void Product::addShipment(Shipment const& s)
{
  
}
*/
  
void Product::update()
{
  for (int i = 0; i < shipmentList.size()-1; i++) {
    for (int j = i + 1; j< shipmentList.size(); i++) {
      if (isExpiryDateTheSame(shipmentList[i], shipmentList[j])) {
        sipmentList[i].amount += shipmentList[j].amount;
        shipmentList.erase (shipmentList.begin()+j);
      }
    }
  }

  for(int i=0; i<shipmentList.size(); i++)
  {    
    if(isExpired(shipmentList[i]))
      shipmentList.erase(shipmentList.begin()+i);
  }
  
}
  
