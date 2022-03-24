#include <stdio.h>
#include "good/good.h"
#include "tools/color.h"
//商品数据库的文件相对路径
static file_PATH="src/data/good.txt";
static const char* header = "|ID         |Name       |Price      |Date       |Seller     |State      |";
static const char* divide = "+-----------+-----------+-----------+-----------+-----------+-----------+";
//定义GOOD类型的goods结构体数组
struct GOOD goods[MAX_GOOD];
int totalGoods=0;//所有商品量
static const char* stateName[] = {"Selling", "Sold", "Banned"};

//读取商品信息
void pullGoods()
{
    FILE* fp = fopen(file_PATH,"r");
    totalGoods=0;
    if(fp)
    {
        while(fscanf(fp,"%s%lf%s%s%s%s%u",goods[totalGoods].ID,\
        &goods[totalGoods].Pri,goods[totalGoods].NAME,goods[totalGoods].INFO,\
        goods[totalGoods].Seller,goods[totalGoods].Date,&goods[totalGoods].Status) != EOF)
        {
            totalGoods++;
        }
        fclose(fp);
    }

    // struct GOOD tmp;
    // printf("请输入要添加的商品编号:");
    // scanf("%s",tmp.ID);
    // printf("请输入要添加的商品价格:");
    // scanf("%lf",&tmp.Pri);
    // printf("请输入要添加的商品名:");
    // scanf("%s",tmp.NAME);
    // printf("请输入要添加的商品信息:");
    // scanf("%s",tmp.INFO);
    // printf("请输入卖家ID:");
    // scanf("%s",tmp.Seller);
    // printf("请输入年月日,中间用-隔开:");//后期需优化！！自动加载日期
    // scanf("%s",tmp.Date);


    // int flag=addGood(&tmp);
    printGoods();
}
//写入商品信息
void pushGoods()
{
    FILE* fp=fopen(file_PATH,"w");
    int i=0;
    for(i=0;i<totalGoods;i++)
    {
         fprintf(fp,"%s %lf %s %s %s %s %u\n",goods[i].ID,goods[i].Pri,goods[i].NAME,\
         goods[i].INFO,goods[i].Seller,goods[i].Date,goods[i].Status);
    }
    fclose(fp);
}

//标准输出商品信息
static void printGood(int i)
{
    printf("|%-10s |%-10s |%-10.1f |%-10s |%-10s |%-10s |\n",goods[i].ID,goods[i].NAME,goods[i].Pri,\
    goods[i].Date,goods[i].Seller,stateName[goods[i].Status]);
}

//打印商品总表
void printGoods()
{
    int i=0;
    printf("\n%s%s商品表%s\n", BOLD, FRONT_RED, RESET);
    printf("%s\n",divide);
    printf("%s\n",header);
    printf("%s\n",divide);
    for(i=0;i<totalGoods;i++)
    {
        printGood(i);
        printf("%s\n",divide);
    } 
}

//通过商品id查询商品
int searchGoodID(const char* id)
{
    int i=0;
    for(i=0;i<totalGoods;i++)
    {
        if(strcmp(goods[i].ID,id)==0)
        {
            return i;
        }
    }
    return -1;
}

//添加商品
int addGood(struct GOOD* tmp)
{
    if (totalGoods == MAX_GOOD) return 0;
    tmp->Status=SELLING;
    goods[totalGoods++] = *tmp;
    return 1;
}