#include "quote.h"
#include "bulk_quote.h"
#include "disc_quote.h"
#include "sales_quote.h"
int main() {
    //size_t n;
    quote a("大衣",580);
    a.print_total(2);
    cout<<endl;
    a.debug();
    bulk_quote b("大衣",580,2,0.15);
    cout<<endl;
    b.print_total(5);
    cout<<endl;
    b.debug();
    cout<<endl;
    //disc_quote c;
    sales_quote d("大衣",580,2,0.15);
    d.print_total(3);
    cout<<endl;
    d.print_total(2);
    cout<<endl;
    d.print_total(1);
    return 0;
}