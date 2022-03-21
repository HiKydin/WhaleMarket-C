#ifndef _ORDER_H_
#define _ORDER_H_

struct ORDER
{
    char orderID[10];
    char goodID[10];
    double trsMoney;
    int Time_year;
    int Time_moon;
    int Time_day;
    char SellerID[10];
    char BuyersID[10];
};
#endif