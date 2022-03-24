#include <stdio.h>
#include <stdlib.h>
#include "user/user.h"
#include "tools/color.h"

//用户数据库的文件相对路径
static file_PATH="src/data/user.txt";
//输出表头
static const char* header = "|ID         |Name       |Contact    |Address    |Balance    |";
//输出表尾
static const char* divide = "+-----------+-----------+-----------+-----------+-----------+";
//定义USER类型的users结构体数组
struct USER users[100];
int totalUser=0;//所有用户量

//读取用户信息
void pullUsers()
{
    FILE* fp = fopen(file_PATH, "r");

    if (fp) 
    {
        while (fscanf(fp, "%s%s%s%s%s%lf", users[totalUser].id, \
users[totalUser].name, users[totalUser].passwd, users[totalUser].contact, \
users[totalUser].address, &(users[totalUser].balance)) != EOF) totalUser++;
        fclose(fp);
    }

    printUsers();
}

//标准输出用户信息
static void printUser(int i) {
    printf("|%-10s |%-10s |%-10s |%-10s |%-10.1f |\n", users[i].id, users[i].name, \
users[i].contact, users[i].address, users[i].balance);
}
//打印用户总表
void printUsers()
{
    int i=0;
    printf("\n%s%s用户表%s\n", BOLD, FRONT_RED, RESET);
    printf("%s\n",divide);
    printf("%s\n",header);
    printf("%s\n",divide);
    for(i=0;i<totalUser;i++)
    {
        printUser(i);
        printf("%s\n",divide);
    }
}
//写入用户信息
void pushUsers()
{
    FILE *fp=NULL;
    fp=fopen(file_PATH,"w");
    int i=0;
    for(i=0;i<totalUser;i++)
    {
          fprintf(fp,"%s %s %s %s %s %lf\n",users[i].id, users[i].name,\
          users[i].passwd,users[i].contact, users[i].address,&users[i].balance);
    }
    fclose(fp);
}