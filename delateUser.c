#include "bookSystem.h"

void userDelete()
{
    char name[10];
    printf("������Ҫɾ�����û�\n");
    scanf("%s", name);
    struct User* UserList = loadUsersFromFile("Users.dat");
    deleteUser(&UserList, name);
    saveUsersToFile("Users.dat", UserList);
    freeUserList(UserList);
    clearKey();
    pressEnterToContinue();
}


void deleteUser(struct User **head, const char *name)
{
    struct User *current = *head;
    struct User *prev = NULL;

    while (current != NULL)
    {
        if (strcmp(current->name, name) == 0)
        {
            if (prev == NULL)
            {
                *head = current->next;
            }
            else
            {
                prev->next = current->next;
            }
            free(current);
            printf("��ɾ����");
            return;
        }

        prev = current;
        current = current->next;
    }

    printf("δ�ҵ����û�\n");
}