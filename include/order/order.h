#ifndef _ORDER_H_
#define _ORDER_H_

#include "config.h"
struct Order
{
    char ID[MAX_LEN];
    char goodID[MAX_LEN];
    double trsMoney;
    char Date[MAX_LEN];
    char SellerID[MAX_LEN];
    char BuyersID[MAX_LEN];
};
#endif