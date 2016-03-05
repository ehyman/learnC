#include "stdio.h"
#define MAXLINE 1024
/**
 * some review about get max input line.
 * */
int _getline(char line[]);
void _copy(char f[], char t[]);

int main()
{
	int max;
	int length;
	char line[MAXLINE];
	char maxline[MAXLINE];

	max = 0;
	while((length = _getline(line)) > 0)
	{
		if(length > max)
		{
			max = length;
			_copy(line, maxline);
		}
	}

	if(max > 0)
	{
		printf("%s%s\n%s%d", "The max input line is:", maxline, "The max input line length is:", max);
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

	if(c == '\n')
	{
		s[i] = c;
	}
	s[i] = '\0';
	return i;
}

void _copy(char f[], char t[])
{
	int i = 0;
	while(f[i] != '\0')
	{
		t[i] = f[i];
		++i;
	}
}
