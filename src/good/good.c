#include <stdio.h>
#include "good/good.h"

//商品数据库的文件相对路径
static file_PATH="src/data/good.txt";
//输出表头
static const char* header = "|ID         |Name       |Price      |Date       |Seller     |State      |";
//输出表尾
static const char* divide = "+-----------+-----------+-----------+-----------+-----------+-----------+";
//定义GOOD类型的goods结构体数组
struct GOOD goods[100];
int totalGoods=0;//所有商品量

//读取商品信息
void pullGoods()
{
    FILE* fp = fopen(file_PATH,"r");
    totalGoods=0;
    if(fp)
    {
        while(fscanf(fp,"%s%lf%s%s%s%d%d%d%s",goods[totalGoods].ID,&goods[totalGoods].Pri,goods[totalGoods].NAME,\
        goods[totalGoods].INFO,goods[totalGoods].UserID,&goods[totalGoods].TIME_year,&goods[totalGoods].TIME_moon,\
        &goods[totalGoods].TIME_day,goods[totalGoods].STATU)!=EOF)
        {
            totalGoods++;
        }
        fclose(fp);
    }


    int i=0;
    printf("%s\n",divide);
    for(i=0;i<totalGoods;i++)
    {
        if(i==0)
        {
            printf("%s\n",header);
        }
        printGood(i);
    }
    printf("%s\n",divide);
}

void printGood(int i)
{
    printf("|%-10s |%-12s |%-10.1f |%04d-%02d-%-3d|%-10s |%-13s |\n",goods[i].ID,goods[i].NAME,goods[i].Pri,\
    goods[i].TIME_year,goods[i].TIME_moon,goods[i].TIME_day,goods[i].UserID,goods[i].STATU);
}

void pushGoods()
{

}