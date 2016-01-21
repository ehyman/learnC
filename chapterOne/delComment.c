#include "stdio.h"
#define BEGIN_CHAR '//'
#define BEGIN_MULT_CHAR '/*'
#define MAX_LINE 2048

int _getAllLine(char l[], int limit);
void _delComment(char s[], int len);

int main()
{
    char inLine[MAX_LINE];
    int length;
    length = _getAllLine(inLine, MAX_LINE);
    printf("Input:\n%s\n\n", inLine);
    _delComment(inLine, length);
    printf("Output:\n%s\n\n", inLine);
}

int _getAllLine(char line[], int limit)
{
    int i;
    int c;
    for(i=0; i < limit - 1 && (c = getchar()) != EOF; i++)
    {
        line[i] = c;
    }
    return i;
}

void _delComment(char s[], int len)
{
    int i;
    int pos;
    int j;
    i = 0;
    pos = 1;

    while(len >= 0)
    {
        //双反斜杠前是空格或者换行或者tab或者\0结束符
        if((s[i-1] == ' ' || s[i-1] == '\n' || s[i-1] == '\t' || s[i-1] == '\0') && s[i] == '/' && s[i+1] == '/')
        {
            pos = pos + i;
        }
        if(pos > 1 && s[i] == '\n')
        {
            //delete comment line: replace into ' '
            printf("delete comment from %d to %d\n", pos, i);
            for(j = pos - 1; j < i; ++j)
            {
                s[j] = ' ';
            }
            pos = 1;
        }
        ++i;
        --len;
    }
}