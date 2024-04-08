#include "bookSystem.h"

void bookFind()
{
    char barcode[13];
    printf("������Ҫ���ҵ�ͼ�������\n");
    scanf("%s", barcode);
    struct Book* bookList = loadBooksFromFile("books.dat");
    searchBook(bookList, barcode);
    freeLinkedList(bookList);
    clearKey();
    pressEnterToContinue();
}

void searchBook(struct Book *head, const char *barcode)
{
    struct Book *current = head;

    while (current != NULL)
    {
        if (strcmp(current->barcode, barcode) == 0)
        {
            printf("Title: %s\t", current->title);
            printf("Author: %s\t", current->author);
            printf("Publisher: %s\t", current->publisher);
            printf("Price: %.2f\n", current->price);
            return;
        }

        current = current->next;
    }

    printf("δ�ҵ�����Ϊ %s ��ͼ��\n", barcode);
}