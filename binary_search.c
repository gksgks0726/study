#include <stdio.h>
#include <stdlib.h>



int main()
{   
    int SIZE;
    scanf("%d", &SIZE);

    int arr[SIZE];

    for(int i = 0; i < SIZE; i++)
    {
        scanf("%d", &arr[i]);
    }

    int key;

    scanf("%d", &key);


    printf("%d�� ��ġ�� %d�Դϴ�.\n", key, binarySearch(arr, SIZE, key));

    return 0;
}