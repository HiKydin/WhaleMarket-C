#include "interface/interface.h"
#include "menu/menu.h"
void GOOD_Interface()
{
    int op=usemenu(GOOD);
    while(op != optionNum[GOOD])
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
        op=usemenu(GOOD);
    }
}