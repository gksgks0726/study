#include <stdio.h>
#include <string.h>

int main()
{
    int t_case;
    scanf("%d", &t_case);
    char OX[80];
    int sco, add;
    for(int i = 0; i < t_case; i++)
    {   
        sco = 0, add = 1;
        scanf("%s", OX);

        for(int j = 0; j < strlen(OX); j++)
        {
            if(OX[j] == 'O')
            {
                sco += add;
                add++;
            }
            else
            {
                add = 1;
            }
        }
        printf("%d\n", sco);
    }
    return 0;
}