#include "stdio.h"
#define MAXLINE 1000

int _getline(char s[], int max);
void _copy(char to[], char from[]);

int main()
{
	char line[MAXLINE];
	char longline[MAXLINE];
	int len;
	int longest;
	longest = 0;

	while((len = _getline(line, MAXLINE)) > 0)
	{
		if(len > longest)
		{
			longest = len;
			_copy(longline, line);
		}
	}
	if(longest > 0)
	{
		printf("%s%s", "The longest line is :", longline);
		printf("%s%d\n", "The longest line length is :", longest);
	}
	return 0;
}

int _getline(char s[], int limit)
{
	int c;
	int i;
	for(i=0; (c = getchar()) != EOF && c != '\n' && i < limit -1; ++i)
	{
		s[i] = c;		
	}
	if(c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void _copy(char to[], char from[])
{
	int i;
	i = 0;
	while((from[i]) != '\0')
	{
		to[i] = from[i];
		++i;
	}
}
