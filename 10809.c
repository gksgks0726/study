#include <stdio.h>

int main()
{
    char word[101] = { 0 };
    scanf("%s", word);

    char ch[26]={0};
    for(int i = 0; i < 26; i++)
    {
        ch[i] = -1;
    }

    for(int i = 'a'; i <= 'z'; i++)
    {
        for(int j = 0; word[j] != '\0'; j++)
        {
            if(i == word[j])
            {
                ch[i- 97] = j;
            }
        }
    }
    
    for(int i = 0; i < 26; i++)
    {
        printf("%d ", ch[i]);
    }

    return 0;
}