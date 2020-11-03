#include <stdio.h>

int main ()
{
    int M, H;
    scanf("%d %d", &M, &H);

    if(0 < M && H < 45) M -= 1, H += 15;
    else if(0 < M && H >= 45) H -= 45;
    else if(M == 0 && H < 45) M = 23, H +=15;
    else if(M == 0 && H >= 45) H -= 45; 

    printf("%d %d", M , H);

    return 0;
}