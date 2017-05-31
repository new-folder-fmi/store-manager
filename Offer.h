#ifndef OFFER_H_INCLUDED
#define OFFER_H_INCLUDED
#include"Receipt.h"

class Offer: public Receipt
{
    bool shopSignature;
    bool clientSignature;

 public:
     Offer();
     Offer(Receipt const& r);
     Offer(string const cn,string const sn,int pt,bool hd);

     bool getShopSignature() const;
     bool getClientSignature() const;

     void signatureFromClient();
     void signatureFromShop();
     bool isSigned();

     friend ostream& operator<<(ostream& os, Offer const& obj);
};


#endif // OFFER_H_INCLUDED
