#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N;
    scanf("%d", &N);

    char str[100] = { 0 };

    scanf("%s", str);
    int sum = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        sum += str[i] - '0'; // ���� '0'�� ascii ���� 48�̴�.
    }

    printf("%d", sum);

    return 0;

}