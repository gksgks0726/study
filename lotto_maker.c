#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 6

int main()
{   

    int score[SIZE];
    printf("�� ���� �ζ� ��ȣ �������Դϴ�.\n");
    printf("�ζ� ��ȣ ������ ���Ͻø� Y�� �����ð� (Press Y key button)\n");
    printf("���Ḧ ���Ͻø� �ƹ� Ű�� �����ּ���! (Press Any Key)\n");
    char ch;
    
    ch = getch();
    
    if(ch == 'Y' || ch == 'y')
    {   
        printf("����� ����� ��ȣ�� ");
        srand( (unsigned) time( NULL ));

        for(int i = 0; i < SIZE; i++)
        {
            score[i] = 1 + rand() % 45;
        }    
    
        for(int i = 0; i < SIZE; i++)
        {
             printf("%d ", score[i]);
             if(i == SIZE - 1) printf("�Դϴ�\n");
        }
    }
    else if(ch != 'Y' || ch != 'y')
    {
        printf("���α׷��� �����մϴ� ��ڳ�����!!\n");
    }

    printf("������ : �̹μ�\n");

    return 0;
    
}