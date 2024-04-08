#include "bookSystem.h"

struct Book *loadBooksFromFile(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("打开文件出错 %s\n", filename);
        return NULL;
    }

    struct Book *head = NULL;
    struct Book *tail = NULL;

    while (!feof(file))
    {
        struct Book *newBook = (struct Book *)malloc(sizeof(struct Book));
        if (fread(newBook, sizeof(struct Book), 1, file) != 1)
        {
            free(newBook);
            break;
        }
        newBook->next = NULL;

        if (head == NULL)
        {
            head = newBook;
            tail = newBook;
        }
        else
        {
            tail->next = newBook;
            tail = newBook;
        }
    }

    fclose(file);
    return head;
}

void saveBooksToFile(const char *filename, struct Book *head)
{
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        printf("打开文件出错 %s\n", filename);
        return;
    }

    struct Book *current = head;
    while (current != NULL)
    {
        fwrite(current, sizeof(struct Book), 1, file);
        current = current->next;
    }

    fclose(file);
}

void freeLinkedList(struct Book *head)
{
    struct Book *current = head;
    struct Book *next;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }

    head = NULL;
}

struct User *loadUsersFromFile(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("打开文件出错 %s\n", filename);
        return NULL;
    }

    struct User *head = NULL;
    struct User *tail = NULL;

    while (!feof(file))
    {
        struct User *newUser = (struct User *)malloc(sizeof(struct User));
        if (fread(newUser, sizeof(struct User), 1, file) != 1)
        {
            free(newUser);
            break;
        }
        newUser->next = NULL;

        if (head == NULL)
        {
            head = newUser;
            tail = newUser;
        }
        else
        {
            tail->next = newUser;
            tail = newUser;
        }
    }

    fclose(file);
    return head;
}

void saveUsersToFile(const char *filename, struct User *head)
{
    FILE *file = fopen(filename, "w");
    if (file == NULL)
    {
        printf("打开文件出错 %s\n", filename);
        return;
    }

    struct User *current = head;
    while (current != NULL)
    {
        fwrite(current, sizeof(struct User), 1, file);
        current = current->next;
    }

    fclose(file);
}

void freeUserList(struct User *head)
{
    struct User *current = head;
    struct User *next;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }

    head = NULL;
}

int getListNodeCount(struct User *head)
{
    int count = 0;
    struct User *current = head;

    // 遍历链表，对每个节点进行计数
    while (current != NULL)
    {
        count++;
        current = current->next;
    }

    // 返回节点数量
    return count;
}