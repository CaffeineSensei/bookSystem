#ifndef __BOOKSYSTEM_H__
#define __BOOKSYSTEM_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INPUTNUMBER(x) printf("请输入编号[0-%d]:", x)

struct User
{
    int id;
    char name[10];
    char pwd[10];
    int level;
    char telephone[11];
    char address[50];
    struct User* next;
};

struct Book {
    char barcode[13];
    char title[100];
    char author[100];
    char publisher[100];
    float price;
    struct Book* next;
};

//主界面
void home();

//用户登录
void userLogin();

//管理员登录
void managerLogin();
void userInfomationManage();
void bookInfomationManage();
int inputManagerUserNamePW();
void managerLoginSuccess();

//用户管理
void userAdd();
void addUser(struct User **head,int id);

void userLookOver();
void findUser(struct User *head, const char *name);

void userUpdate();
void updateUser(struct User *head, const char *name);

void userDelete();
void deleteUser(struct User **head, const char *name);

//图书管理
void bookAdd();
void addBook(struct Book **head);

void bookFind();
void searchBook(struct Book *head, const char *barcode);

void bookDelete();
void deleteBook(struct Book **head, const char *barcode);

void bookUpdate();
void modifyBook(struct Book *head, const char *barcode);

//菜单
void loginMenu();
void userLoginMenu();
void managerLoginMenu();
void managerLoginMenu1();
void managerLoginMenu2();
void table1();
void bookDeleteMenu();
void bookUpdateMenu();
void bookFindMenu();

//系统工具
void clearScreen();
void clearKey();
void pressEnterToContinue();
void inputSelectError();


//数据加载与保存
struct Book *loadBooksFromFile(const char *filename);
void saveBooksToFile(const char* filename, struct Book* head);
void freeLinkedList(struct Book *head);

struct User *loadUsersFromFile(const char *filename);
void saveUsersToFile(const char *filename, struct User *head);
void freeUserList(struct User *head);
int getListNodeCount(struct User *head);
#endif