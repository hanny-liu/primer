#include <iostream>
#include<iterator>
#include <array>
using namespace std;

template <typename T, unsigned n>
const T * begin(const T (&arr)[n])
{
    return &arr[0];
}
template <typename T,size_t n>
const T *end(const T (&arr)[n])
{
      return arr[0]+n;
}

int main() {
    int ai[]={0,1,2,3,4,5,6,7,8,9,0};
    cout<<*begin(ai)<<endl;

    return 0;
}