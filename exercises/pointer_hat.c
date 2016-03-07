#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
	char size[3][12] = {
		{'6','6','6','6','7','7','7','7','7','7','7','7'},
		{'1','5','3','7',' ','1','1','3','1','5','3','7'},
		{'2','8','4','8',' ','8','4','8','2','8','4','8'},
	};

	int headsize[12] = {164,166,169,172,175,178,181,184,188,191,194,197};

	char *psize = *size;
	int *pheadsize = headsize;

	float cranium = 0.0f;
	int your_head = 0;
	bool hat_found = false;

	printf("\nEnter the circumference of your head above the eyebows"
			" in inches as a decimal value: \n");
	
	scanf("%f", &cranium);
	
	your_head = (int) (0.8f * cranium);

	unsigned int i = 0;

	if(your_head == *pheadsize)
	{
		hat_found = true;
	}else{
		for(i=1; i<sizeof(headsize)/sizeof(*headsize); ++i)
		{
			if(your_head > *(pheadsize+i-1) && your_head <= *(pheadsize +i))
			{
				hat_found = true;
				break;
			}
		}
	}

	if(hat_found)
	{
		printf("\nYour hat size is %c %c%c%c\n", 
				*(psize +i), 
				*(psize + 1*sizeof(*size)/sizeof(**size) + i), 
				(*(psize + 1*sizeof(*size)/sizeof(**size) + i)) == ' ' ? ' ' : '/',
				(*(psize + 2*sizeof(*size)/sizeof(**size) + i))
			  );
	}else{
		if(your_head < *pheadsize)
		{
			printf("\nToo small, not found...!\n");
		}else{
			printf("\nToo bigger, not found...!\n");
		}
	}

	return 0;
}
