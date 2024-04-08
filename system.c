#include "bookSystem.h"

// 清屏
void clearScreen()
{
    system("cls");
}

// 清除键盘输入缓存区
void clearKey()
{
    while (getchar() != '\n');
}

// 按回车继续
void pressEnterToContinue()
{
    printf("按回车键继续........");
    getchar();
}

// 输入错误
void inputSelectError()
{
    printf("输入编号错误！请重新输入！！！\n");
}