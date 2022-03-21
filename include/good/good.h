#ifndef _GOOD_H_
#define _GOOD_H_

struct GOOD
{
    char goodID[10];
    double goodPri;
    char goodNAME[10];
    char goodINFO[100];
    char goodUserID[10];
    unsigned int goodTIME_year;
    unsigned int goodTIME_moon;
    unsigned int goodTIME_day;
    char goodSTATU[10];
};


#endif