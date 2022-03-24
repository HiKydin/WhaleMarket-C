#ifndef _GOOD_H_
#define _GOOD_H_

#include "config.h"
// good state
typedef enum {SELLING, SOLD, BANNED} State;
struct GOOD
{
    char ID[MAX_LEN];
    double Pri;
    char NAME[MAX_LEN];
    char INFO[MAX_LEN];
    char Seller[MAX_LEN];
    char Date[MAX_LEN];
    State Status;
};

//读取商品信息
void pullGoods();

//标准输出商品信息
static void printGood(int i);
//打印商品总表
void printfGoods();

#endif