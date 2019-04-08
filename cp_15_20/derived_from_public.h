//
// Created by liuhongwei on 19-1-10.
//

#ifndef CP_15_20_DERIVED_FROM_PUBLIC_H
#define CP_15_20_DERIVED_FROM_PUBLIC_H

#include "pub_derv.h"
struct  derived_from_public:public pub_derv
{
    int use_base(){ return prot_mem;};
};
#endif //CP_15_20_DERIVED_FROM_PUBLIC_H
