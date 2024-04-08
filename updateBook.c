#include "bookSystem.h"

void bookUpdate()
{
    char barcode[13];
    printf("请输入要修改的图书的条码\n");
    scanf("%s", barcode);
    struct Book* bookList = loadBooksFromFile("books.dat");
    modifyBook(bookList, barcode);
    saveBooksToFile("books.dat", bookList);
    freeLinkedList(bookList);
    clearKey();
    pressEnterToContinue();
}

void modifyBook(struct Book *head, const char *barcode)
{
    struct Book *current = head;

    while (current != NULL)
    {
        if (strcmp(current->barcode, barcode) == 0)
        {
            printf("Enter new title: ");
            scanf("%s", current->title);
            printf("Enter new author: ");
            scanf("%s", current->author);
            printf("Enter new publisher: ");
            scanf("%s", current->publisher);
            printf("Enter new price: ");
            scanf("%f", &current->price);
            return;
        }

        current = current->next;
    }

    printf("Book with barcode %s not found\n", barcode);
}