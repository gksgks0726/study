#include <stdio.h>

int main()
{
    int res = 0;

    for(int i = 4; i >=2; i++)
    {
        res *= i;
    }

    printf("%d", res);
}