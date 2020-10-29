#include <stdio.h>
#include <string.h>

int str_chr(char *str)
{
    int flag = 0;

    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == str[i + 1]) flag = 1;
        else flag = 0;
    }
}

int main()
{
    // 연속적이지않은 같은 단어가 나오면 그룹 단어가 아님.
    int N;
    scanf("%d", &N);

    char word[N][101];
    int checker[26] ={ 0 };
    int cnt = 0;

    for(int i = 0; i < N; i++)
    {
        scanf("%s", word[i]);
        for(int j = 0; j < 26; j++)
            checker[j] = 0;
        
        for(int j = 0; j <strlen(word[i]); j++)
        {
            if(0 < j && word[i][j - 1] == word[i][j])
            {
                if(j == strlen(word[i]) - 1)
                {
                    cnt++;
                    break;
                }
                else
                    continue;
            }
            else{
                if(checker[word[i][j] - 'a'] == 1)
                    break;
                else
                {
                    checker[word[i][j] - 'a'] = 1;
                    if(j == strlen(word[i]) - 1)
                    {
                        cnt++;
                        break;
                    }
                }    
            }
        }
    }

    printf("%d\n", cnt);    


    return 0;
}