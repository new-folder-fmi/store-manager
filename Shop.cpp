#include "Shop.h"
#include <iostream>
void Shop::setName()
{
    std::cin >> this->name;
}
std::string Shop::getName()
{
    return this->name;
}

void Shop::setBudget()
{
    std::cin >> this->budget;
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

int main ()
{
    Shop shop1;
    shop1.setName();
    std::cout<<shop1.getName();
}
