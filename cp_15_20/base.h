//
// Created by liuhongwei on 19-1-10.
//

#ifndef CP_15_20_BASE_H
#define CP_15_20_BASE_H
/*class base {
protected:
    int prot_mem;
public:
    void pub_mem(){}
private:
    char priv_mem;
};*/
#endif //CP_15_20_BASE_H

/*class base
{
protected:
    size_t n;
public:
    size_t size() const {return n;}
};
class derived: private base
{
public:
    using base::size;
protected:
    using base::n;
};*/
/*class pal
{
public:
    int f(base b) {return b.pub_mem();}//正确：pal是base的友元
    int f2(sneaky s){return s.j;}//错误：pal不是sneaky的友元
    int f3(sneaky s){return s.prot_mem;}//正确：pal是base的友元
};*/
struct base
{
    base():mem(0){}

protected:
    int mem;
};
struct derived :base
{
    derived(int i):mem(i){}//初始化derived::mem,同时base::mem会默认初始化
    int get_mem() { return base::mem;}//返回base::mem

protected:
    int mem;//隐藏基类中的mem
};
