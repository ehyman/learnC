#include "stdio.h"
#define MAXLINE 1024

int _getline(char s[], int limit);
void _discarenewline(char nl[]);
void _reverse(char line[]);

int main()
{
	char line[MAXLINE];

	while(_getline(line, MAXLINE) > 0)
	{
		_discarenewline(line);
		_reverse(line);
		printf("%s\n", line);
	}

	return 0;
}

int _getline(char s[], int limit)
{
	int c;
	int i;
	i = 0;
	for(i=0; i< limit -1 && (c = getchar()) != EOF && c != '\n'; ++i)
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

void _discarenewline(char nl[])
{
	int i;
	for(i=0; nl[i] != '\0'; ++i)
	{
		if(nl[i] == '\n')
		{
			nl[i] = '\0';
		}
	}
}

void _reverse(char line[])
{
	char ch;
	int i;
	int j;

	for(j=0; line[j] != '\0'; j++)
	{
		
	}

	--j;

	for(i=0; i < j; ++i)
	{
		ch = line[i];
		line[i] = line[j];
		line[j] = ch;
		--j;
	}
}


/* vim: set ts=4 sw=4 tw=0 noet :*/
