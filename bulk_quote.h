//
// Created by liuhongwei on 19-1-10.
//

#ifndef C_PRIMER_BULK_QUOTE_H
#define C_PRIMER_BULK_QUOTE_H

#include "quote.h"
class bulk_quote:public quote
{
public:
    bulk_quote()= default;
    bulk_quote(const string & s,double p,size_t n,double dis):
              quote(s,p),mini(n),discount(dis){}
    double net_price(size_t n=0) const override
    {
        if(n>mini)
            return n*(1-discount)*price;
        else
            return  n*price;
    }
    void debug() override
    {
        cout<<"quote::cloth"<<"/n"<<"quote::num"<<"/n"<<"quote::price"<<"/n"<<"mini"<<"discount"<<endl;
    }
private:
    size_t mini;
    double discount;

};
#endif //C_PRIMER_BULK_QUOTE_H
