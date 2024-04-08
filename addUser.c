#include "bookSystem.h"

void userAdd()
{
    char ok;
    struct User* UserList = loadUsersFromFile("Users.dat");
    int id = getListNodeCount(UserList);
    do
    {
        id++;
        addUser(&UserList,id);
        clearKey();
        printf("是否继续输入数据写入文件(Y/N)？");
        ok = getchar();
    } while (ok == 'y' || ok == 'Y');
    saveUsersToFile("Users.dat", UserList);
    freeUserList(UserList);
}

void addUser(struct User **head,int id)
{
    struct User *newUser = (struct User *)malloc(sizeof(struct User));
    printf("输入用户名: ");
    scanf("%s", newUser->name);
    printf("输入密码: ");
    scanf("%s", newUser->pwd);
    printf("输入电话号码: ");
    scanf("%s", newUser->telephone);
    printf("输入收货地址: ");
    scanf("%s", newUser->address);
    newUser->id = id;
    newUser->level = 1;
    newUser->next = *head;
    *head = newUser;
}