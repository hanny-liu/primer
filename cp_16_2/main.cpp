#include <iostream>
#include <vector>
#include <list>
using namespace std;

template <typename T>
bool compare(const T &p1,const T &p2)
{
    if(p1<p2)
        return true;
    else
        return false;
}


int main() {
    int a=5,b=6;
    if(compare(a,b))
        cout<<"a<b"<<endl;
    else
        cout<<"a>b"<<endl;
    return 0;
}