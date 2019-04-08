#include <iostream>
#include <typeinfo>
using namespace std;

template <typename T>
void f(T a)
{
    cout<<"调用的函数为："<<"f(T)"<<ends;
    cout<<"T的类型为："<<typeid(T).name()<<endl;
}

template <typename T>
void f(const T* a)
{
    cout<<"调用的函数为："<<"f(const T*)"<<ends;
    cout<<"T的类型为："<<typeid(const T*).name()<<endl;
}

template <typename T>
void g(T a)
{
    cout<<"调用的函数为："<<"g(T)"<<ends;
    cout<<"T的类型为："<<typeid(T).name()<<endl;
}

template <typename T>
void g(T* a)
{
    cout<<"调用的函数为："<<"g(T*)"<<ends;
    cout<<"T的类型为："<<typeid(T*).name()<<endl;
}

int main() {
    int i=42,*p=&i;
    const int ci=0,*p2=&ci;
    g(42);
    g(p);
    g(ci);
    g(p2);
    f(42);
    f(p);
    f(ci);
    f(p2);
    return 0;
}