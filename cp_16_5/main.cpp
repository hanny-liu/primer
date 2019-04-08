#include <iostream>
#include<array>
#include <string>
using namespace std;

template <typename T,unsigned n>
void print(T (&arr)[n])
{
    for(auto i:arr)
        cout<<i<<ends;
}


int main() {
    int ai[]={1,2,3,4,5};
    double ad[]={12.3,829000,6372,9030.32};
    string as[]={"duwh","hdwiu"};
    print(ai);
    cout<<endl;
    print(ad);
    cout<<endl;
    print(as);
    return 0;
}