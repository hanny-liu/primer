#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void print(const T &v)
{
    for(auto i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<endl;
    }
}



int main()
{
    vector<int> v{2,3,4,232,343};
    print(v);
    return 0;
}