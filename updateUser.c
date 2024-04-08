#include "bookSystem.h"

void userUpdate()
{
    char name[10];
    printf("������Ҫ�޸ĵ��û���\n");
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
            printf("�������û���: ");
            scanf("%s", current->name);
            printf("����������: ");
            scanf("%s", current->pwd);
            printf("�����Ա�ȼ�: ");
            scanf("%d", current->level);
            return;
        }

        current = current->next;
    }

    printf("δ�ҵ����û�\n");
}