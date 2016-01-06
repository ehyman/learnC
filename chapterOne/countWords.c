#include "stdio.h"
#define IN  1
#define OUT 0

/**
 * 统计输入的行数，单词数，字符数
 */
main()
{
	int nl, nw, nc;
	int state, c;
	nl = nw = nc = 0;
	state = OUT;
	while((c = getchar()) != EOF)
	{
		++nc;
		if(c == '\n')
			++nl;
		if(c == '\t' || c == '\n' || c == ' ')
		{
			state = OUT;
		}else if(state == OUT)
		{
			state = IN;
			++nw;
		}
		printf("%s%d\n", "Total input chars is :", nc);
		printf("%s%d\n", "Total input lines is :", nl);
		printf("%s%d\n", "Total input words is :", nw);
	}
	//printf("%s%d\n", "Total input chars is :", nc);
	//printf("%s%d\n", "Total input lines is :", nl);
	//printf("%s%d\n", "Total input words is :", nw);
}
