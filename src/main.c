#include "interface/interface.h"
#include "tools/hint.h"
#include "good/good.h"
#include "user/user.h"
#include "order/order.h"
#include <stdio.h>
#include <stdlib.h>
int main() {
    pullusers();
    // pullGoods();
    // pullOrders();

    //welcomeMessage();
    // MAIN_Interface();
    // exitingMessage();
    
    //pushUsers();
    // pushGoods();
    // pushOrders();
    //return 0;

    // struct GOOD gd={"M00002",10.1,"数据库","大二计算机教材","U00002",2001,03,04,"已售出"};
    // printf("%s\n%s\n%.1lf\n%s\n",gd.goodID,gd.goodNAME,gd.goodPri,gd.goodINFO);
    // printf("%s\n%02d-%02d-%02d\n%s\n",gd.goodUserID,gd.goodTIME_year,gd.goodTIME_moon,gd.goodTIME_day,gd.goodSTATU);


    // struct USER ur={"U00001","user1","pwd1","1231231","江苏省南京市",42.4};
    // printf("%s\n%s\n%s\n",ur.userID,ur.userName,ur.userPwd);
    // printf("%s\n%s\n%.1lf\n",ur.userPhone,ur.userAddress,ur.userBalance);

    // struct ORDER od={"T00001","M00001",52.3,2022,03,04,"U00001","U00002"};
    // printf("%s\n%s\n%.1lf\n",od.orderID,od.goodID,od.trsMoney);
    // printf("%04d-%02d-%02d\n%s\n%s\n",od.Time_year,od.Time_moon,od.Time_day,od.SellerID,od.BuyersID);
   
}
