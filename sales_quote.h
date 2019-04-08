//
// Created by liuhongwei on 19-1-10.
//

#ifndef CP15_5_SALES_QUOTE_H
#define CP15_5_SALES_QUOTE_H

#include "disc_quote.h"
class sales_quote:public disc_quote
{
public:
    sales_quote(const string & s,double p,size_t n,double dis):
            disc_quote(s,p,n,dis){}
    double net_price(size_t n=0) const override
    {
        if(n<=limit)
            return n*(1-discount)*price;
        else
            return ((n-limit)*price+limit*(1-discount)*price);
    }
};
#endif //CP15_5_SALES_QUOTE_H
