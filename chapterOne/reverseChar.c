#include "stdio.h"
#define MAXLINE 1000
/**
 * 字符串反转
 */

int _getline(char line[], int limit);
void _reverse(char s[], int len, char r[]);

int main()
{
    char line[MAXLINE];
    char re[MAXLINE];
    int len;
    while((len = _getline(line, MAXLINE)) > 0)
    {
        _reverse(line, len, re);     
        printf("%s\n", re);   
    }
    return 0;
}

int _getline(char line[], int limit)
{
    int i;
    int c;
    for(i=0; i < limit -1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        line[i] = c;
    }
    return i;
}

void _reverse(char s[], int len, char re[])
{
    int i, j;
    j=0;
    for(i=len-1; i >= 0; i--)
    {
        re[j] = s[i];
        ++j;
    }
}