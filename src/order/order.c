#include <stdio.h>
#include "order/order.h"
#include "tools/color.h"

struct Order orders[MAX_ORDER]; // all orders
static int totalOrder = 0;

static const char* file_PATH = "src/data/order.txt";
static const char* header = "|ID         |Good       |Price      |Date       |Seller     |Buyer      |";
static const char* divide = "+-----------+-----------+-----------+-----------+-----------+-----------+";
void pullOrders()
{
    FILE* fp=fopen(file_PATH,"r");
    if(fp)
    {
        while(fscanf(fp,"%s%s%lf%s%s%s",orders[totalOrder].ID, \
    orders[totalOrder].goodID,&orders[totalOrder].trsMoney, orders[totalOrder].Date, \
    orders[totalOrder].SellerID, orders[totalOrder].BuyersID) != EOF)
        {
            totalOrder++;
        }
    }
    fclose(fp);
    
    printOrders();
}

void pushOrders()
{
    FILE* fp=fopen(file_PATH,"w");
    int i=0;
    for(i=0;i<totalOrder;i++)
    {
        fprintf(fp,"%s %s %lf %s %s %s\n",orders[i].ID, \
    orders[i].goodID,orders[i].trsMoney, orders[i].Date, \
    orders[i].SellerID, orders[i].BuyersID);
    }
    fclose(fp);
}

//标准输出订单信息
static void printOrder(int i)
{
    printf("|%-10s |%-10s |%-10.1f |%-10s |%-10s |%-10s |\n", orders[i].ID, \
    orders[i].goodID, orders[i].trsMoney, orders[i].Date, \
    orders[i].SellerID, orders[i].BuyersID);
}
//打印订单总表
void printOrders()
{
    int i=0;
    printf("\n%s%s订单表%s\n", BOLD, FRONT_RED, RESET);
    printf("%s\n",divide);
    printf("%s\n",header);
    printf("%s\n",divide);
    for(i=0;i<totalOrder;i++)
    {
        printOrder(i);
        printf("%s\n",divide);
    }
}