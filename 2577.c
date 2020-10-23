#include <stdio.h>

int main ()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int res = A * B * C;

    int N[10] = { 0 };

    int remainder = 0;

    while(res > 0)
    {
        remainder = res % 10;
        res /= 10;
        N[remainder]++;
    }

    for(int i = 0; i < 10; i++)
    {
        printf("%d\n", N[i]);
    }

    return 0;
}