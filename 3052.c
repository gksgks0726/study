#include <stdio.h>

int main()
{
    int arr[10] = { 0 };
    int remainder[42] = { 0 };

    for(int i = 0; i < 42; i++)
    {
        remainder[i] = -1;
    }

    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        
        remainder[arr[i] % 42]++;
    }

    int cnt = 0;

    for(int i = 0; i < 42; i++)
    {
        if(remainder[i] != -1)
        {
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}