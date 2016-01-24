#include "stdio.h"
int main()
{
    int i;
    int c;
    int lim;
    int j;

    i = 0;
    j = 0;
    lim = 20;
    
    for(; i <lim-1 && (c = getchar())!= EOF && c!= '\n'; i++)
    {
        printf("%c = %d\n", c, c);
    }
    printf("==============");

    while((c = getchar()) != EOF)
    {   
        if(j < lim -1)
        {
            if(c != '\n')
            {
                printf("%c => %d\n", c, c);
            }
        }
        j++;
    }
    return 0;
}