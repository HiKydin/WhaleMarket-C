#include "interface/interface.h"
#include "menu/menu.h"
void USER_Interface()
{
    int op=usemenu(USER);
    while(op != optionNum[USER])
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
        op=usemenu(USER);
    }
}