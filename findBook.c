#include "bookSystem.h"

void bookFind()
{
    char barcode[13];
    printf("请输入要查找的图书的条码\n");
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

    printf("未找到条码为 %s 的图书\n", barcode);
}