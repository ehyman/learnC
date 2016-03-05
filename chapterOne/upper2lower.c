#include <stdio.h>
#define MAX_LINE 1024

/**
 * simple test functions.
 * a-z/ A-Z 
 * upper to lower, 
 * and lower to upper.
 */

int _getline(char line[]);
void lower(char low[]);
void upper(char up[]);

int main()
{
    char line[MAX_LINE];
    int len;

    while((len = _getline(line)) > 0)
    {
        printf("Input line: %s\n", line);
        lower(line);
        printf("Lower line: %s\n", line);
        upper(line);
        printf("Upper line: %s\n\n", line);
    }
    return 0;
}

int _getline(char s[])
{
    int c;
    int i;
    i = 0;
    while((c = getchar()) != EOF && c != '\n')
    {
        s[i] = c;
        ++i;
    }
    if(i > 0 && c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void lower(char in[])
{
    int i;
    i = 0;
    while(in[i] != '\0')
    {
        if(in[i] >= 'A' && in[i] <= 'Z')
        {
            in[i] = in[i] + 'a' - 'A';
        }
        i++;
    }
}

void upper(char in[])
{
    int i;
    i = 0;
    while(in[i] != '\0')
    {
        if(in[i] >= 'a' && in[i] <= 'z')
        {
            in[i] = in[i] + 'A' - 'a';
        }
        i++;
    }
}