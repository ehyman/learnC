#include "stdio.h"
#define MAXLINE 1000

int _getline(char s[], int limit);
void _copy(char to[], char from[]);

int main()
{
	int len;
	int longest;
	char line[MAXLINE];
	char longline[MAXLINE];
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
		printf("%s%s\n", "longest line is :", longline);
	}
	return 0;
}

int _getline(char s[], int limit)
{
	int c;
	int i;
	for(i=0; i<limit -1 && (c = getchar()) != EOF && c != '\n'; ++i)
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
	while(from[i] != '\0')
	{
		to[i] = from[i];
		++i;
	}
}
