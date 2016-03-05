#include <stdio.h>
#define MAXLINE 1000
#define MAXLENGTH 20

int _getline(char s[], int limit);
void _copy(char to[], char from[]);

int main()
{
    char line[MAXLINE];
    char longestline[MAXLINE];
    int MAX;
    int length;
    
    MAX = 0;

    while((length = _getline(line, MAXLINE)) > 0)
    {
        if(length > MAX)
        {
            MAX = length;
            _copy(longestline, line);
        }
        if(length > MAXLENGTH)
        {
            printf("%s%s\t%s%d\t%s%d\n", "Input line:", line, "Input length:", length, "length is bigger than: ", MAXLENGTH);
        }
    }
    if(MAX > 0)
    {
        printf("%s%s\n%s%d\n", "The max input line is: ", longestline, "The length is: ", MAX);
    }
    return 0;
}

int _getline(char s[], int limit)
{
    int c;
    int i;
    for(i = 0; i < limit-1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }
    if(c == '\n')
    {
        s[i] = c;
    }
    s[i] = '\0';
    return i;
}

void _copy(char to[], char from[])
{
    int i;
    i = 0;
    while(from[i] != '\0')
    {
        to[i] = from[i];
        ++i;
    }
}