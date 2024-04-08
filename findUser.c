#include "bookSystem.h"

void userLookOver()
{
    char name[10];
    printf("������Ҫ���ҵ��û���\n");
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
            printf("�˺�: %d\t", current->id);
            printf("�û���: %s\t", current->name);
            printf("����: %s\n", current->pwd);
            printf("��Ա�ȼ�: %d\t", current->level);
            printf("�绰����: %s\t", current->telephone);
            printf("�ջ���ַ: %s\n", current->address);
            return;
        }

        current = current->next;
    }

    printf("δ�ҵ����û�\n");
}