#include "bookSystem.h"

void managerLogin()
{
    int ok = inputManagerUserNamePW();
    switch (ok)
    {
    case 1:
        printf("密码错误!\n");
        pressEnterToContinue();
        break;
    case 2:
        printf("用户名错误!\n");
        pressEnterToContinue();
        break;
    case 0:
        managerLoginSuccess();
        break;
    }
}

int inputManagerUserNamePW()
{
    char username[20] = "";
    char pwd[20] = "";
    printf("输入管理员账号:");
    scanf("%s", username);
    clearKey();
    printf("输入管理员密码:");
    scanf("%s", pwd);
    clearKey();
    if (strcmp(username, "admin") == 0)
    {
        if (strcmp(pwd, "888888") == 0)
        {
            return 0; // 显示管理员菜单
        }
        else
        {
            return 1; // 提示密码错误
        }
    }
    else
    {
        return 2; // 提示用户名错误
    }
}

void managerLoginSuccess()
{
    while (1)
    {
        clearScreen();
        int select = 0;
        managerLoginMenu();
        INPUTNUMBER(2);
        scanf("%d", &select);
        clearKey();
        switch (select)
        {
        case 0: // 返回主菜单
            return;
        case 1: // 管理用户信息
            userInfomationManage();
            break;
        case 2: // 管理图书信息
            bookInfomationManage();
            break;
        default:
            inputSelectError();
            pressEnterToContinue();
        }
    }
}

void userInfomationManage()
{
    while (1)
    {
        clearScreen();
        int select = 0;
        managerLoginMenu1();
        INPUTNUMBER(4);
        scanf("%d", &select);
        clearKey();
        switch (select)
        {
        case 0: // 返回主菜单
            return;
        case 1: // 增加用户信息
            userAdd();
            break;
        case 2: // 查看用户信息
            userLookOver();
            break;
        case 3: // 修改用户信息
            userUpdate();
            break;
        case 4: // 删除用户信息
            userDelete();
            break;
        default:
            inputSelectError();
            pressEnterToContinue();
        }
    }
}

void bookInfomationManage()
{
    while (1)
    {
        
        clearScreen();
        int select = 0;
        managerLoginMenu2();
        INPUTNUMBER(4);
        scanf("%d", &select);
        clearKey();
        switch (select)
        {
        case 0: // 返回主菜单
            return;
        case 1: // 增加图书
            bookAdd();
            break;
        case 2: // 删除图书
            bookDelete();
            break;
        case 3: // 修改图书信息
            bookUpdate();
            break;
        case 4: // 查找图书
            bookFind();
            break;
        default:
            inputSelectError();
            pressEnterToContinue();
        }
    }
}