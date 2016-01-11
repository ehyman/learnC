#include "stdio.h"

main()
{
	int a[26];
	int c;
	
	int i;
	int n;

	for(i=0; i<26; ++i)
	{
		a[i] = 0;
	}

	while((c = getchar()) != EOF)
	{
		if(c >= 'a' && c <= 'z')
		{
			++a[c - 'a'];
		}
		
	}
	
	for(n=0; n<26; ++n)
	{
		printf("%c", 'a' + n);
		printf("%4d\n", a[n]);
	}
}
