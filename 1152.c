#include <stdio.h>
#include <string.h>
#define LEN 1000000

int main()
{
    char word[LEN];
    gets(word);
    int word_cnt = 0;

    for(int i = 0; i < strlen(word); i++)
    {
        if(word[i] == ' ')
        {
            word_cnt++;
        }
    }


    if(word[0] == ' ') word_cnt--; //ù ���ڰ� �����̸� �ܾ �ƴϴϱ� -1
    if(word[strlen(word) - 1] == ' ') word_cnt--; // ������ ���ڰ� �����̸� �� ���õ� �ܾ �ƴϴϱ� -1
    
    printf("%d", word_cnt + 1);
 
    return 0;
}