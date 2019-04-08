#include <iostream>
using namespace std;

template <typename T,unsigned n>
constexpr size_t col(const T (&arr)[n])
{
    return n;
}




int main() {
    int a[]={0,1,2,3,4,5,6,7,8,9};
    cout<<col(a);
    return 0;
}