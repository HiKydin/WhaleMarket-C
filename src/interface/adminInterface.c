#include "interface/interface.h"
#include "menu/menu.h"
void ADMIN_Interface()
{
    int op=usemenu(ADMIN);
    while(op != optionNum[ADMIN])
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
            case 6:
                break;
        }
        op=usemenu(ADMIN);
    }
}