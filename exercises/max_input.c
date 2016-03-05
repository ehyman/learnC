#include <stdio.h>
#define MAXLINE 1000

int _getline(char line[MAXLINE]);
void _copy(char from[], char to[]);

int _getline(char line[])
{
	int i = 0;
	int c;
	while((c = getchar()) != EOF && c !='\n')
	{
		line[i] = c;
		++i;
	}

	if(c == '\n')
	{
		line[i] = c;
	}

	line[i] = '\0';

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

int main(int argc, char *argv[])
{
	int max = 0;
	int length = 0;
	char line[MAXLINE];
	char maxline[MAXLINE];

	while((length = _getline(line)) > 0)
	{
		if(length > max)
		{
			_copy(line, maxline);
			max = length;
		}
	}

	if(max > 0)
	{
		printf("The input max line(length:%d) is: %s\n", max, maxline);
	}

	return 0;
}
