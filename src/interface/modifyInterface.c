#include "interface/interface.h"
#include "menu/menu.h"
void MODIFY_Interface()
{
    int op=usemenu(MODIFY);
    while(op != optionNum[MODIFY])
    {
        switch(op)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
        }
        op=usemenu(MODIFY);
    }
}