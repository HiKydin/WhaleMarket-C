#include "interface/interface.h"
#include "menu/menu.h"
void MAIN_Interface()
{
    int op=usemenu(MAIN);
    while(op != optionNum[MAIN])
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
        op=usemenu(MAIN);
    }
}