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
        printf("�Ƿ������������д���ļ�(Y/N)��");
        ok = getchar();
    } while (ok == 'y' || ok == 'Y');
    saveUsersToFile("Users.dat", UserList);
    freeUserList(UserList);
}

void addUser(struct User **head,int id)
{
    struct User *newUser = (struct User *)malloc(sizeof(struct User));
    printf("�����û���: ");
    scanf("%s", newUser->name);
    printf("��������: ");
    scanf("%s", newUser->pwd);
    printf("����绰����: ");
    scanf("%s", newUser->telephone);
    printf("�����ջ���ַ: ");
    scanf("%s", newUser->address);
    newUser->id = id;
    newUser->level = 1;
    newUser->next = *head;
    *head = newUser;
}