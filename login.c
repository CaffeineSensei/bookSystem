#include "bookSystem.h"

void home()
{
    while (1)
    {
        int lead = 0;
        clearScreen();
        loginMenu();
        printf("��������[0-2]:");
        scanf("%d", &lead);
        clearKey();
        switch (lead)
        {
        case 0:
            printf("ϵͳ���˳�������\n");
            exit(0);
            break;
        case 1: // �û���¼
            // userLogin();
            break;
        case 2: // ����Ա��¼
            managerLogin();
            break;
        default:
            inputSelectError();
            pressEnterToContinue();
            break;
        }
    }
}