#include "bookSystem.h"

void userUpdate()
{
    char name[10];
    printf("请输入要修改的用户名\n");
    scanf("%s", name);
    struct User* UserList = loadUsersFromFile("Users.dat");
    updateUser(UserList, name);
    saveUsersToFile("Users.dat", UserList);
    freeUserList(UserList);
    clearKey();
    pressEnterToContinue();
}

void updateUser(struct User *head, const char *name)
{
    struct User *current = head;

    while (current != NULL)
    {
        if (strcmp(current->name, name) == 0)
        {
            printf("输入新用户名: ");
            scanf("%s", current->name);
            printf("输入新密码: ");
            scanf("%s", current->pwd);
            printf("输入会员等级: ");
            scanf("%d", current->level);
            return;
        }

        current = current->next;
    }

    printf("未找到该用户\n");
}