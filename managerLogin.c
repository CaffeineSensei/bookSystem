#include "bookSystem.h"

void managerLogin()
{
    int ok = inputManagerUserNamePW();
    switch (ok)
    {
    case 1:
        printf("�������!\n");
        pressEnterToContinue();
        break;
    case 2:
        printf("�û�������!\n");
        pressEnterToContinue();
        break;
    case 0:
        managerLoginSuccess();
        break;
    }
}

int inputManagerUserNamePW()
{
    char username[20] = "";
    char pwd[20] = "";
    printf("�������Ա�˺�:");
    scanf("%s", username);
    clearKey();
    printf("�������Ա����:");
    scanf("%s", pwd);
    clearKey();
    if (strcmp(username, "admin") == 0)
    {
        if (strcmp(pwd, "888888") == 0)
        {
            return 0; // ��ʾ����Ա�˵�
        }
        else
        {
            return 1; // ��ʾ�������
        }
    }
    else
    {
        return 2; // ��ʾ�û�������
    }
}

void managerLoginSuccess()
{
    while (1)
    {
        clearScreen();
        int select = 0;
        managerLoginMenu();
        INPUTNUMBER(2);
        scanf("%d", &select);
        clearKey();
        switch (select)
        {
        case 0: // �������˵�
            return;
        case 1: // �����û���Ϣ
            userInfomationManage();
            break;
        case 2: // ����ͼ����Ϣ
            bookInfomationManage();
            break;
        default:
            inputSelectError();
            pressEnterToContinue();
        }
    }
}

void userInfomationManage()
{
    while (1)
    {
        clearScreen();
        int select = 0;
        managerLoginMenu1();
        INPUTNUMBER(4);
        scanf("%d", &select);
        clearKey();
        switch (select)
        {
        case 0: // �������˵�
            return;
        case 1: // �����û���Ϣ
            userAdd();
            break;
        case 2: // �鿴�û���Ϣ
            userLookOver();
            break;
        case 3: // �޸��û���Ϣ
            userUpdate();
            break;
        case 4: // ɾ���û���Ϣ
            userDelete();
            break;
        default:
            inputSelectError();
            pressEnterToContinue();
        }
    }
}

void bookInfomationManage()
{
    while (1)
    {
        
        clearScreen();
        int select = 0;
        managerLoginMenu2();
        INPUTNUMBER(4);
        scanf("%d", &select);
        clearKey();
        switch (select)
        {
        case 0: // �������˵�
            return;
        case 1: // ����ͼ��
            bookAdd();
            break;
        case 2: // ɾ��ͼ��
            bookDelete();
            break;
        case 3: // �޸�ͼ����Ϣ
            bookUpdate();
            break;
        case 4: // ����ͼ��
            bookFind();
            break;
        default:
            inputSelectError();
            pressEnterToContinue();
        }
    }
}