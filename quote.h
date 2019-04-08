//
// Created by liuhongwei on 19-1-10.
//

#ifndef C_PRIMER_QUOTE_H
#define C_PRIMER_QUOTE_H

#include <iostream>
#include <string>
using namespace std;

class quote
{
public:
    quote()= default;//默认构造函数
    quote(const string & s,double p)://构造函数
          cloth(s),price(p){}

    virtual double net_price(size_t n=0) const//计算总价
     {
        return n*price;
     }
     void print_total(size_t n)
     {
        cout<<net_price(n);
     }
    virtual void debug()
    {
        cout<<"quote::cloth"<<"/n"<<"quote::num"<<endl;
    }
private:
    string cloth;
protected:
    double price=0.0;
};

#endif //C_PRIMER_QUOTE_H
