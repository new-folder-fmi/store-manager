#include "Shop.h"
#include <iostream>
void Shop::setName(string _name)
{
    this->name = _name;
}
std::string Shop::getName()
{
    return this->name;
}

void Shop::setBudget(float _budget)
{
    this->budget = _budget;
}

float Shop::getBudget()
{
    return this->budget;
}

void Shop::sellNormal(std::string productName , short int amount , bool clientIsSpecial)
{
    float currentPrice = 0;

    //Update price

    //Remove from product database

    //Create a new receipt in the receipt database

    //Add currentPrice to total budget
}

void Shop::sellByBill(std::string productName , short int amount /* Client */)
{
    float currentPrice = 0;
    bool clientIsSpecial = 0;

    //Update price

    //Find client and update "special" status

    //Update price

    //Remove from product database

    //Create a new receipt in the receipt database

    //Add currentPrice to total budget
}

void Shop::sellByOffer(std::string productName , short int amount)
{
    //Get client signature

    sellByBill(productName , amount /* Client */ );
}

void Shop::restockOrder()
{

}
