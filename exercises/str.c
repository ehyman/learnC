#include <string.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	char joke[] = "The joke is :\n\n";

	char str[][40] = {
		"My dog hasn't got any nose.\n",
		"How dose your dog smell then?\n",
		"My dog smells horrible.\n"
	};

	int strCount = strCount = sizeof(str) / sizeof(str[0]);
	int length = 0;
	int i = 0;
	for(i=0; i < strCount; ++i)
	{
		length += sizeof(str[i]);
	}

	char haha[length + sizeof(joke) +1];

	if( ! strcpy(haha, joke) )
	{
		printf("Error copying joke to haha.%s", haha);	
		return 1;
	}


	for(i=0; i<strCount; ++i)
	{
		if( ! strcat(haha, str[i]) )
		{
			printf("Error copying string \"%s\"", str[i]);
			return 2;
		}
	}

	printf("%s", haha);

	return 0;
}
