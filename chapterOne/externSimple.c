#include "stdio.h"
#define MAXLINE 1000

int max;
char line[MAXLINE];
char longest[MAXLINE];

int _getline(void);
void _copy(void);

int main()
{
	int len;
	extern int max;
	extern char longest[];
	max = 0;

	while((len = _getline()) > 0)
	{
		if(len > max)
		{
			max = len;
			_copy();
		}
	}

	if(max > 0)
	{
		printf("%s%s\n", "The longest line is :", longest);
	}
	return 0;
}

int _getline()
{
	int c, i;
	extern char line[];
	for(i=0; i<MAXLINE && (c=getchar()) != EOF && c != '\n'; ++i)
	{
		line[i] = c;
	}
	if(c == '\n')
	{
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

void _copy()
{
	int i;

	extern char line[];
	extern char longest[];

	i = 0;
	while(line[i] != '\0')
	{
		longest[i] = line[i];
		++i;
	}
}

/* vim: set ts=4 sw=4 tw=0 noet :*/
