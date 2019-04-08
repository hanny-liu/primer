//
// Created by liuhongwei on 19-1-10.
//

#ifndef CP15_5_DISC_QUOTE_H
#define CP15_5_DISC_QUOTE_H

#include "quote.h"
class disc_quote:public quote//定义抽象基类
{
public:
    disc_quote()= default;
    disc_quote(const string & s,double p,size_t n,double dis):
            quote(s,p),limit(n),discount(dis){}
    double net_price(size_t n) const override=0;//纯虚函数
protected:
    double discount;
    size_t limit;
};
#endif //CP15_5_DISC_QUOTE_H
