#include <stdio.h>

void print(char *str, int n)
{
    for(int i = 0; *(str + i) != '\0'; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%c", *(str + i));
        }
    }
}

int main ()
{
    int T, R;
    scanf("%d", &T);
    char S[21];

    for(int i = 0; i < T; i++)
    {
        scanf("%d", &R);
        scanf("%s", S);
        print(S, R);
        printf("\n");
    }

    return 0;
}