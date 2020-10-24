#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    double sco[N];
    double M = 0;
    for(int i = 0; i < N; i++)
    {
        scanf("%lf", &sco[i]);

        if(sco[i] > M)
        M = sco[i];
    }
    
    double total = 0;

    for(int i = 0; i < N; i++)
    {
        sco[i] = (sco[i] / M) * 100;
        total += sco[i];
    }

    printf("%.2lf\n", total / (double) N );

    return 0;
}