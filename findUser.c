#include "bookSystem.h"

void userLookOver()
{
    char name[10];
    printf("请输入要查找的用户名\n");
    scanf("%s", name);
    struct User* UserList = loadUsersFromFile("Users.dat");
    findUser(UserList, name);
    freeUserList(UserList);
    clearKey();
    pressEnterToContinue();
}

void findUser(struct User *head, const char *name)
{
    struct User *current = head;
    while (current != NULL)
    {
        if (strcmp(current->name, name) == 0)
        {
            printf("账号: %d\t", current->id);
            printf("用户名: %s\t", current->name);
            printf("密码: %s\n", current->pwd);
            printf("会员等级: %d\t", current->level);
            printf("电话号码: %s\t", current->telephone);
            printf("收货地址: %s\n", current->address);
            return;
        }

        current = current->next;
    }

    printf("未找到该用户\n");
}