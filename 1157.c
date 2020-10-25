#include <stdio.h>
#include <string.h>
#define LEN 1000000

int main()
{
    char word[LEN] ={ 0 };
    char alpha[26] = { 0 };
    gets(word);

    for(int i = 0; i < strlen(word); i++)
    {
        if(word[i] >= 'a')
        {
            word[i] -= 32; // 소문자면 대문자로 변경
        }
        alpha[word[i] - 'A']++; // ex) word[i] = 'S'면 'S' (83) - 'A' (65) = 18이고 S는 알파벳 19번 째 문자이니까 논리적으로 확립.
    }

    int max = -1;
    char ch = '?';
    for(int i = 0; i < 26; i++)
    {
        if(alpha[i] > max)
        {
            max = alpha[i];
            ch = i;
        }

        else if(alpha[i] == max) ch = '?';
    }

    (ch == '?') ? printf("?") : printf("%c", ch + 65); 

    return 0;
}