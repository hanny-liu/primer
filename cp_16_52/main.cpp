#include <iostream>
using namespace std;

template <typename T,typename ...args>
void foo(const T &t, const args& ...rest)
{
    cout<< sizeof...(args)<<ends;
    cout<<sizeof...(rest)<<endl;
}


int main() {
    int i=0;
    double d=3.14;
    string s="how now brown cow";
    foo(i,s,42,d);
    foo(s,42,"hi");
    foo(d,s);
    foo("hi");
    return 0;
}