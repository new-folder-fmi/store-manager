#ifndef SHOP_H
#define SHOP_H
#include <string>

class Shop
{
    private:

    std::string name;
    float budget;
    //productDB
    //clientDB
    //receiptDB

    public:

    // Basic info set/get methods
    void setName();
    void setBudget();
    std::string getName();
    float getBudget();

    // Database operations (may be private, accessed only by game loop)
    void editInfo();
    void sellNormal( std::string productName , short int amount , bool clientIsSpecial );
    void sellByBill(std::string productName , short int amount /* Client */);
    void sellByOffer(std::string productName , short int amount /* Client */);
    void restockOrder();

    // main game loop

    void gameLoop();
};

#endif // SHOP_H
