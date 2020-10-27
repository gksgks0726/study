#include <stdio.h>
#include <string.h>

int main()
{

    int dial[27] = {3,3,3, 4,4,4, 5,5,5, 6,6,6, 7,7,7, 8,8,8,8, 9,9,9, 10,10,10,10};

    char alphabet[16];

    int result = 0;

    scanf("%s", alphabet);

    for(int i = 0; i < strlen(alphabet); i++)
        result += dial[alphabet[i] - 'A'];   

    printf("%d", result);





    return 0;
}