//
// Created by liuhongwei on 19-1-10.
//

#ifndef CP_15_20_PRIV_DERV_H
#define CP_15_20_PRIV_DERV_H

#include "base.h"
struct priv_derv:private base
{
    int f1(){ return prot_mem;}
};
#endif //CP_15_20_PRIV_DERV_H
