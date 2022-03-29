#include "interface/interface.h"
#include "menu/menu.h"
void INFO_Interface()
{
    int op=usemenu(INFO);
    while(op != optionNum[INFO])
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
        op=usemenu(INFO);
    }
}