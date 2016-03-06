#include <stdio.h>

int main(int argc, char *argv[])
{
	long nums[] = {15L, 25L, 35L, 45L};

	unsigned long int i = 0;
	for(i=0; i<sizeof(nums)/sizeof(nums[0]); ++i)
	{
		printf("nums[%ld] = %ld, address is %ld\n", i, nums[i], (long)&nums[i]);	
	}

	printf("The long occupies %ld bytes.\n", sizeof(long));

	return 0;

}
