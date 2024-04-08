#include "bookSystem.h"

void bookAdd()
{
    char ok;
    struct Book* bookList = loadBooksFromFile("books.dat");
    do
    {
        addBook(&bookList);
        clearKey();
        printf("是否继续输入数据写入文件(Y/N)？");
        ok = getchar();
    } while (ok == 'y' || ok == 'Y');
    saveBooksToFile("books.dat", bookList);
    freeLinkedList(bookList);
}




void addBook(struct Book **head)
{
    struct Book *newBook = (struct Book *)malloc(sizeof(struct Book));
    printf("输入条码: ");
    scanf("%s", newBook->barcode);
    printf("输入书名: ");
    scanf("%s", newBook->title);
    printf("输入作者: ");
    scanf("%s", newBook->author);
    printf("输入出版社: ");
    scanf("%s", newBook->publisher);
    printf("输入价格: ");
    scanf("%f", &newBook->price);
    newBook->next = *head;
    *head = newBook;
}
