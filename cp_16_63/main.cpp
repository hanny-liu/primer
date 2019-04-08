#include <iostream>
#include<vector>
#include <cstring>
using namespace std;

template <typename T>
size_t count(const vector<T> & t,const T &i )
{
    size_t  n=0;
    for(auto j:t)
    {
        if(j==i)
            n++;
    }
    return n;
}

template <>
size_t count(const vector<char *> &t,char *const &i)
{
    size_t  n=0;
    for(auto j:t)
    {
        if(!strcmp(j,i))
            n++;
    }
    return n;
}



int main() {
   vector<double> vd{312.2,34.43,435.6,1.2,2.3,3.4,4.5};
   vector<int> vi{1,2,3,4,1,2,3,4,12,23};
   vector<string> vs{"a","b","c","abb","a","b","c","abb","a","b","c","abb","a"};
   string a="a";
   cout<<count(vi,2)<<endl;
   cout<<count(vs,string("a"))<<endl;
   cout<<count(vd,0.0)<<endl;
    return 0;
}