#include<iostream>
#include"ReceiptStorage.h"
#include"Offer.h"
#include"Receipt.h"

using std::cout;
using std::endl;
using std::ostream;


ReceiptStorage::ReceiptStorage()
{}

void ReceiptStorage::printReceiptList() const
{
    for(int i=0;i<receiptList.size();i++)
    {
        cout<<receiptList[i]<<endl; //class Receipt has operator<<
    }
}

void ReceiptStorage::printOfferList() const
{
    for(int i=0;i<offerList.size();i++)//-1?
    {
        cout<<offerList[i]<<endl; //class Offer has operator<<
    }
}

/*void ReceiptStorage::addOffer(Offer const& offer)
{
    offerList.push_back(offer);
}
void ReceiptStorage::addReceipt(Receipt const& receipt)
{
    receiptList.push_back(receipt);
}
*/

void receiptToOffer(Receipt const& receipt)
{
    Offer offer(receipt); //class Offer has constructor with receipt
    removeReceipt(receipt);
    offerList.push_back(offer);

}

void ReceiptStorage::removeOffer(Offer const& offer)
{
    for(int i=0;i<offerList.size();i++)
    {
        if(offerList[i]=offer) offerList.erase(i);
    }

}

void ReceiptStorage::removeLastOffer()
{
    offerList.pop_back();
}

void ReceiptStorage::removeReceipt(Receipt const& receipt)
{
    for(int i=0;i<receiptList.size();i++)
    {
        if(receiptList[i]=receipt) receiptList.erase(i);
    }
}

void ReceiptStorage::removeLastReceipt()
{
    receiptList.pop_back();
}
