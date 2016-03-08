#include <stdio.h>

int main(int argc, char * argv[])
{
	int ages[] = {20, 21, 22, 23, 24};
	char *names[] = {"Tom", "Tim", "Jim", "Yim", "Aim"};
	
	int count = sizeof(ages) / sizeof(int);
	int i = 0;
	
	int *cur_age = ages;
	char **cur_name = names;

	for(i=0; i<count; ++i)
	{
		printf("%s has %d years alive.\n", *(cur_name + i), *(cur_age + i));
	}

	return 0;
}
