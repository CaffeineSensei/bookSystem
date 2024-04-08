#include "bookSystem.h"

void bookAdd()
{
    char ok;
    struct Book* bookList = loadBooksFromFile("books.dat");
    do
    {
        addBook(&bookList);
        clearKey();
        printf("�Ƿ������������д���ļ�(Y/N)��");
        ok = getchar();
    } while (ok == 'y' || ok == 'Y');
    saveBooksToFile("books.dat", bookList);
    freeLinkedList(bookList);
}




void addBook(struct Book **head)
{
    struct Book *newBook = (struct Book *)malloc(sizeof(struct Book));
    printf("��������: ");
    scanf("%s", newBook->barcode);
    printf("��������: ");
    scanf("%s", newBook->title);
    printf("��������: ");
    scanf("%s", newBook->author);
    printf("���������: ");
    scanf("%s", newBook->publisher);
    printf("����۸�: ");
    scanf("%f", &newBook->price);
    newBook->next = *head;
    *head = newBook;
}
