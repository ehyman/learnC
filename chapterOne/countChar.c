#include "stdio.h"

main()
{
	long nc;
	nc = 0;
	while(getchar() != EOF)
		++nc;
	printf("%s%ld", "Total input char counts is: ", nc);
}
