#include "bookSystem.h"

// ����
void clearScreen()
{
    system("cls");
}

// ����������뻺����
void clearKey()
{
    while (getchar() != '\n');
}

// ���س�����
void pressEnterToContinue()
{
    printf("���س�������........");
    getchar();
}

// �������
void inputSelectError()
{
    printf("�����Ŵ������������룡����\n");
}