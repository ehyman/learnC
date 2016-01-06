#include "stdio.h"

main()
{
	long ln;
	int c;
	ln = 0;
	while( (c = getchar()) != EOF )
	{
		if(c == '\n')
		{
			++ln;
			printf("%s%d", "Total input line is: ", ln);
		}
	}
}
