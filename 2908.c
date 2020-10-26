#include <stdio.h>
#include <string.h>
#define MAX(a, b) a > b ? a : b

int main()
{   
    char A[4];
    char B[4];

    scanf("%s %s", A, B);

    for(int i = 2; i >= 0; i--)
    {
        if(A[i] > B[i])
        {
            for(int j = 2; j >= 0; j--)
            {
                printf("%c", A[j]);
            }
            break;
        }
        else if(A[i] < B[i])
        {
            for(int j = 2; j >= 0; j--)
            {
                printf("%c", B[j]);
            }
            break;
        }
    }

    return 0;
}