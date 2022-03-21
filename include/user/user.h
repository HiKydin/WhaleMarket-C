#ifndef _USER_H_
#define _USER_H_

struct USER
{
    char userID[10];
    char userName[10];
    char userPwd[20];
    char userPhone[20];
    char userAddress[20];
    double userBalance;
}ur;

void  pullusers();

#endif
