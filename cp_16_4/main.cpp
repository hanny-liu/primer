#include <iostream>
#include<vector>
#include <list>
#include <string>
using namespace std;

template <typename I,typename T>
I find(I b,I e,T v)
{
    while(b!=e&&*b!=v)
        b++;
    return b;
}


int main() {
   vector<int> vi{1,2,3,4,5,2,4,32,1,7,9};
   list<string> ls{"ndwueh","dhehiduew","hdeuiwhdieuw","hdwue"};
   cout<<*find(vi.begin(),vi.end(),4);
   cout<<*find(ls.begin(),ls.end(),"dhehiduew");
    return 0;
}