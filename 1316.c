#include <stdio.h>
#include <string.h>

int str_chr(char *str)
{
    int flag = 0;

    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == str[i + 1]) flag = 1;
        else flag = 0;
    }
}

int main()
{
    // 연속적이지않은 같은 단어가 나오면 그룹 단어가 아님.
    int N;
    scanf("%d", &N);

    char word[N][101];

    for(int i = 0; i < N; i++)
        scanf("%s", word[i]);


    

    return 0;
}