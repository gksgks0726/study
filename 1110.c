#include <stdio.h>

int main()
{   
    int n;
    scanf("%d", &n);

    int cnt = 0;

    int res = n;

    while(1)
    {   
        cnt++; 
        int x = n / 10;
        int y = n % 10;
        int i = (x + y) % 10;
        int j = (y * 10) + i;
        n = j;
        if(j == res) break;  
    }

    printf("%d", cnt);

    return 0;
}