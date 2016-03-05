#include "stdio.h"
#include "limits.h"

int main()
{
	printf("wordsize %d\n", __WORDSIZE);
	printf("char min %d\n", CHAR_MIN);
	printf("char max %d\n", CHAR_MAX);
	printf("unsigned char min %d\n", 0);
	printf("unsigned char max %d\n", UCHAR_MAX);
	printf("short int min %d\n", SHRT_MIN);
	printf("short int max %d\n", SHRT_MAX);
	printf("unsigned short int min %d\n", 0);
	printf("unsigned short int max %u\n", USHRT_MAX);
	printf("int min %d\n", INT_MIN);
	printf("int max %d\n", INT_MAX);
	printf("unsigned int min %u\n", 0);
	printf("unsigned int max %u\n", UINT_MAX);
	printf("long int min %ld\n", LONG_MIN);
	printf("long int max %ld\n", LONG_MAX);
	printf("unsigned long int min %d\n", 0);
	printf("unsigned long int max %lu\n", ULONG_MAX);
	printf("long long int min %lld\n", LLONG_MIN);
	printf("long long int max %lld\n", LLONG_MAX);
	printf("unsigned long long int min %lld\n", 0);
	printf("unsigned long long int max %llu\n", ULLONG_MAX);
	return 0;
}
