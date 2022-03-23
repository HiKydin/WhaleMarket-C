#ifndef _USER_H_
#define _USER_H_

struct USER
{
    char id[10];
    char name[10];
    char passwd[20];
    char contact[20];
    char address[20];
    double balance;
};

void pullUsers();
void pushUser();

#endif
