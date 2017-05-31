#ifndef RECEIPTSTORAGE_H_INCLUDED
#define RECEIPTSTORAGE_H_INCLUDED
#include"Receipt.h"
#include"Offer.h"
#include <vector>

class ReceiptStorage
{
    std::vector<Receipt> receiptList;
    std::vector <Offer> offerList;

public:
    ReceiptStorage();

    void printReceiptList() const;
    void printOfferList() const;

    //void addOffer(Offer const& offer); probably useless
    //void addReceipt(Receipt const& receipt);

    void receiptToOffer(Receipt const& receipt);//changes receipt to offer, may be outside of class

    void removeOffer();
    void removeLastOffer();
    void removeReceipt();
    void removeLastReceipt();
};
#endif // RECEIPTSTORAGE_H_INCLUDED
