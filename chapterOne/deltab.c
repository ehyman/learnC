#include <stdio.h>

#define TABINC 5      //tab increment size

//replace tabs with the proper number of blanks
int main(void)
{
    int c, nb ,pos;
    
    nb = 0;           //number of blanks necessary
    pos = 1;          //position of character in line
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            nb = TABINC - (pos - 1) % TABINC;
            while (nb > 0)
            {
                putchar(' ');
                pos++;
                nb--;    
            }    
        }    
        else if (c == '\n')
        {
            putchar(c);
            pos = 1;    
        }
        else
        {
            putchar(c);
            pos++;    
        }
    }    
    
    return 0;
}