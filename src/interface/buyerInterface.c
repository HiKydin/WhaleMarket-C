#include "interface/interface.h"
#include "menu/menu.h"
void BUYER_Interface()
{
    int op=usemenu(BUYER);
    while(op != optionNum[BUYER])
    {
        switch(op)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
        }
        op=usemenu(BUYER);
    }
}