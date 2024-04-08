#include "bookSystem.h"

void home()
{
    while (1)
    {
        int lead = 0;
        clearScreen();
        loginMenu();
        printf("请输入编号[0-2]:");
        scanf("%d", &lead);
        clearKey();
        switch (lead)
        {
        case 0:
            printf("系统已退出。。。\n");
            exit(0);
            break;
        case 1: // 用户登录
            // userLogin();
            break;
        case 2: // 管理员登录
            managerLogin();
            break;
        default:
            inputSelectError();
            pressEnterToContinue();
            break;
        }
    }
}