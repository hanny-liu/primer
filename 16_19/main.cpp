#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void print(const vector<T> &v)
{
    for(typename vector<T>::size_type i=0;i!=v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}


int main()
{
    vector<int> vi{1,2,3,4,5,6};
    print(vi);
    return 0;
}