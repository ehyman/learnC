#include <stdio.h>

int main(int argc, char * argv[])
{
	char board[3][3] = {
		{'1', '2', '3'},
		{'4', '5', '6'},
		{'7', '8', '9'},
	};
	
	char *pboard = *board;
	
	printf("board address: %p\n", board);
	printf("pboard address: %p\n", pboard);
	int i = 0;
	for(i=0; i<9; i++)
	printf("%c address is ==> %p\n", *(pboard+i), (pboard +i));

	return 0;
}
