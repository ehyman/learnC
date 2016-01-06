#include "stdio.h"

main()
{
	int cs, ct, ce;
	cs = ct = ce = 0;
	int c;
	while((c = getchar()) != EOF)
	{
		if(c == ' ')
			++cs;
		
		if(c == '\t')
			++ct;

		if(c == '\n')
			++ce;

	}
	printf("%s%d\n", "Total space is : ", cs);
	printf("%s%d\n", "Total tab is : ", ct);
	printf("%s%d\n", "Total enter is : ", ce);
}

