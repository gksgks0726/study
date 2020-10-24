#include <stdio.h>

int main()
{
    int  C, N;
    scanf("%d", &C);
    double sco[1000];
    double total;
    double over;
    double avg;
    for(int i = 0; i < C; i++)
    {
        scanf("%d", &N);
        
        over = 0;
        
        total = 0;

        avg = 0;
        
        for(int j = 0; j < N; j++)
        {
            scanf("%lf", &sco[j]);
            total += sco[j];
        }

        avg = (total / (double) N);

        for(int k = 0; k < N; k++)
        {
            if(avg < sco[k])
            {
                over++;
            }
        }
        printf("%.3lf%%\n", (over / (double) N) * 100);
    }

    return 0;
}