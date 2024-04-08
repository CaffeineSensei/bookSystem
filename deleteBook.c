#include "bookSystem.h"

void bookDelete()
{
    char barcode[13];
    printf("������Ҫɾ����ͼ�������\n");
    scanf("%s", barcode);
    struct Book* bookList = loadBooksFromFile("books.dat");
    deleteBook(&bookList, barcode);
    saveBooksToFile("books.dat", bookList);
    freeLinkedList(bookList);
    clearKey();
    pressEnterToContinue();
}

void deleteBook(struct Book **head, const char *barcode)
{
    struct Book *current = *head;
    struct Book *prev = NULL;

    while (current != NULL)
    {
        if (strcmp(current->barcode, barcode) == 0)
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

    printf("δ�ҵ�����Ϊ %s ��ͼ��\n", barcode);
}