#include <stdio.h>
#include <string.h>

int main()
{

    char str[101];

    scanf("%s", str);

    int cnt_str = 0;

    for(int i = 0; i < strlen(str); i++)
    {
        if(str[i] == 'c')
        {
            if(str[i + 1] == '=' || str[i + 1] == '-') i++;
        }
        else if(str[i] == 'd')
        {
            if(str[i + 1] == '-') i++;
            else if(str[i + 1] == 'z' && str[i + 2] == '=') i += 2;
        }
        else if(str[i] == 'l' || str[i] == 'n')
        {
            if(str[i + 1] == 'j') i++;
        }
        else if(str[i] == 's' || str[i] == 'z')
        {
            if(str[i + 1] == '=') i++;
        }
        cnt_str++;
    }

    printf("%d", cnt_str);    

    return 0;

    
}