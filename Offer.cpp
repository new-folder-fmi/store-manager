#include<iostream>
#include<cstring>
#include"Offer.h"

using std::string;
using std::ostream;


Offer::Offer():shopSignature(0),clientSignature(0){}

Offer::Offer(Receipt const& r):Receipt(r.getClientName(),r.getShopName(),r.getPriceTotal(),r.getHasDiscount()),
                               shopSignature(0),clientSignature(0){}

Offer::Offer(string const cn, string const sn, int pt, bool hd):Receipt(cn,sn,pt,hd),
                                                               shopSignature(0),clientSignature(0){}

bool Offer::getShopSignature() const
 {
     return shopSignature;
 }

bool Offer::getClientSignature() const
{
    return shopSignature;
}

 void Offer::signatureFromClient()
 {
     clientSignature=true;
 }

 void Offer::signatureFromShop()
 {
     shopSignature=true;
 }

bool Offer::isSigned()
{
    return shopSignature&&clientSignature;
}

ostream& operator<<(ostream& os, Offer const& obj)
{
    os<<(Receipt)obj;
    return os<<' '<<obj.shopSignature<<' '<<obj.clientSignature<<'\n';
}
