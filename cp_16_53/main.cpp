#include <iostream>
using namespace std;

template <typename T>
ostream & print(ostream & os,const T &t)
{
    return os<<t;
}

template <typename T,typename ...U>
ostream & print(ostream& os,const T &t,const U &...rest)
{
    os<<t<<",";
    return print(os,rest...);
}

int main() {
    print(cout,213,"seiojif",2.3,'a');
    print(cout,1);
    print(cout,"ehu");
    return 0;

}