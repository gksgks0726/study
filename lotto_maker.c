#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 6

int main()
{   

    int score[SIZE];
    printf("이 것은 로또 번호 생성기입니다.\n");
    printf("로또 번호 생성을 원하시면 Y를 누르시고 (Press Y key button)\n");
    printf("종료를 원하시면 아무 키나 눌러주세요! (Press Any Key)\n");
    char ch;
    
    ch = getch();
    
    if(ch == 'Y' || ch == 'y')
    {   
        printf("당신의 행운의 번호는 ");
        srand( (unsigned) time( NULL ));

        for(int i = 0; i < SIZE; i++)
        {
            score[i] = 1 + rand() % 45;
        }    
    
        for(int i = 0; i < SIZE; i++)
        {
             printf("%d ", score[i]);
             if(i == SIZE - 1) printf("입니다\n");
        }
    }
    else if(ch != 'Y' || ch != 'y')
    {
        printf("프로그램을 종료합니다 대박나세요!!\n");
    }

    printf("만든이 : 이민섭\n");

    return 0;
    
}