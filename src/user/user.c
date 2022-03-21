#include <stdio.h>
#include <stdlib.h>
#include "user/user.h"

static flle_PATH="src/data/user.txt";

void pullusers()
{
    FILE *fp=NULL;
    fp = fopen (flle_PATH, "w+");
    fputs("U00001 user1 pwd1 1233123 江苏省南京市 42.4", fp);
    rewind(fp);

    FILE* pf = fopen(flle_PATH, "r");
    struct USER ur;
    fscanf(pf, "%s %s %s %s %s %lf", ur.userID, ur.userName, ur.userPwd,ur.userPhone,ur.userAddress,&ur.userBalance);
   
    printf("Read userID |%s|\n", ur.userID );
    printf("Read userName |%s|\n", ur.userName );
    printf("Read userPwd |%s|\n", ur.userPwd );
    printf("Read userPhone |%s|\n", ur.userPhone );
    printf("Read userAddress |%s|\n", ur.userAddress );
    printf("Read userBalance |%lf|\n", ur.userBalance );
    fclose(fp);
}
