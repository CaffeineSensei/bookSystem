#include "bookSystem.h"

void loginMenu()           //登录菜单
{
    printf("┏━━━━━━━━━━欢迎使用图书订购系统━━━━━━━━━━┓\n");
    printf("┃             1、用户登录                ┃\n");
    printf("┃             2、管理员登录              ┃\n");
    printf("┃             0、退出                    ┃\n");
    printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

void userLoginMenu()      //用户界面菜单
{
    printf("┏━━━━━━━━━━用户登录主菜单━━━━━━━━━━┓\n");
    printf("┃           1.订购图书             ┃\n");
    printf("┃           2.查看订购信息         ┃\n");
    printf("┃           3.修改密码             ┃\n");
    printf("┃           0.返回                 ┃\n");
    printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

void managerLoginMenu()    //管理员界面菜单
{
    printf("┏━━━━━━━━━━━━━━━管理员菜单━━━━━━━━━━━━━━━┓\n");
    printf("┃             1、管理用户信息            ┃\n");
    printf("┃             2、管理图书信息            ┃\n");
    printf("┃             0、返回                    ┃\n");
    printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

void managerLoginMenu1()  //用户管理界面菜单
{
    printf("┏━━━━━━━━━━━━━━━管理员菜单━━━━━━━━━━━━━━━┓\n");
    printf("┃             1、增加用户信息            ┃\n");
    printf("┃             2、查看用户信息            ┃\n");
    printf("┃             3、修改用户信息            ┃\n");
    printf("┃             4、删除用户信息            ┃\n");
    printf("┃             0、返回                    ┃\n");
    printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

void managerLoginMenu2()  //图书管理界面菜单
{
    printf("┏━━━━━━━━━━━━━━━管理员菜单━━━━━━━━━━━━━━━┓\n");
    printf("┃             1、增加图书                ┃\n");
    printf("┃             2、删除图书                ┃\n");
    printf("┃             3、修改图书                ┃\n");
    printf("┃             4、查找图书                ┃\n");
    printf("┃             0、返回                    ┃\n");
    printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

void bookDeleteMenu()   
{
    printf("┏━━━━━━━━━━━删除图书信息━━━━━━━━━━━┓\n");
    printf("┃       1、删除指定条码的图书      ┃\n");
    printf("┃       2、删除指定作者的图书      ┃\n");
    printf("┃       3、删除指定出版社图书      ┃\n");
    printf("┃       4、删除全部数据            ┃\n");
    printf("┃       0、返回                    ┃\n");
    printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

void bookUpdateMenu()
{
    printf("┏━━━━━━━━━━━修改图书数据━━━━━━━━━━━┓\n");
    printf("┃           1.修改单项             ┃\n");
    printf("┃           2.修改多项             ┃\n");
    printf("┃           0.返回                 ┃\n");
    printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
    return;
}

void table1()
{
    printf("┏━━━━━━━━┓\n");
    printf("┃1.书名  ┃\n");
    printf("┃2.作者  ┃\n");
    printf("┃3.出版社┃\n");
    printf("┃4.价格  ┃\n");
    printf("┃0.条码  ┃\n");
    printf("┗━━━━━━━━┛\n");
}


void bookFindMenu()
{
    printf("┏━━━━━━━━━查询菜单━━━━━━━━━━┓\n");
    printf("┃                           ┃\n");
    printf("┃      1.按书名查询         ┃\n");
    printf("┃      2.按作者查询         ┃\n");
    printf("┃      3.按出版社查询       ┃\n");
    printf("┃      4.按价格查询         ┃\n");
    printf("┃      5.按条码查询         ┃\n");
    printf("┃      0.返回               ┃\n");
    printf("┃                           ┃\n");
    printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}

void userLookOverMenu()
{
    printf("┏━━━━━━查看会员信息━━━━━━━━━┓\n");
    printf("┃                           ┃\n");
    printf("┃      1.输入ID查看         ┃\n");
    printf("┃      2.输入用户名查看     ┃\n");
    printf("┃      3.输入电话号码查看    ┃\n");
    printf("┃      0.返回               ┃\n");
    printf("┃                           ┃\n");
    printf("┗━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n");
}