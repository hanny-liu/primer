#include <iostream>
#include <string>
#include <sstream>
using namespace std;

template <typename T>
string debug_rep(const T &t)
{
   ostringstream os;
   os<<t;
   return os.str();
}

template <typename T>
ostream &print(ostream & os,const T& t)
{
    return os<<t;
}

template <typename T,typename ...args>
ostream &print(ostream & os,const T& t, const args &...rest)
{
    os<<t<<",";
    return print(os,rest...);
}

template <typename ...args>
ostream &errormsg(ostream & os,const args&...rest)
{
    return print(os,debug_rep(rest)...);
}

/*template <typename T>
ostream & operator <<(ostream & os,const T &t)
{
    os<<t;
    return os;
}

template <typename T,typename ...args>
ostream & operator <<(ostream &os,const T &t,const args& ...rest)
{
    os<<t<<",";
    //os<<(rest...);
    return os<<rest...;
}*/

int main() {
    string s="dhweuhweh";
    int a=28319;
    errormsg(cerr,a,s,21,"312",'d',"2132");
    errormsg(cerr,"hduwu");
    return 0;
}