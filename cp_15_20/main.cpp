#include <iostream>
#include "base.h"
#include "pub_derv.h"
#include "priv_derv.h"
#include "derived_from_public.h"
#include "derived_from_private.h"
using namespace std;
int main() {
    pub_derv d1;
    priv_derv d2;
    derived_from_public dd1;
    derived_from_private dd2;
    base *p1=&d1;
    base *p2=&d2;
    base *p3=&dd1;
    base *p4=&dd2;
    return 0;
}