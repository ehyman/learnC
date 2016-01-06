#include "stdio.h"
#define IN    1
#define OUT   0

void main()
{
	int nw;
	int c;
	int state;
	state = OUT;
	
	nw = 0;
	while((c = getchar()) != EOF)
	{
		if(c == '\t' || c == '\n' || c == ' ')
		{
			state = OUT;
		}else if(state == OUT)
		{
			++nw;
			state = IN;
		}
		printf("%s%d\n", "Total input words: ", nw);
	}
}
