#include "stdio.h"

main()
{
	int digital[10];
	int i;
	int c;
	int ndigital;
	int nwhite;
	int nother;
	
	ndigital = nwhite = nother = 0;

	for(i = 0; i < 10; ++i)
	{
		digital[i] = 0;
	}

	while((c = getchar()) != EOF)
	{
		if(c >= '0' && c <= '9')
		{
			++digital[c - '0'];
			++ndigital;
		}else if(c == ' ' || c == '\n' || c == '\t')
		{
			++nwhite;
		}else{
			++nother;
		}

		printf("digits =");

		for (i = 0; i < 10; ++i)
		{
			printf(" %d", digital[i]);
		}
		printf(", white space = %d, other = %d\n", nwhite, nother);
	}

}
