#include <stdio.h>

int main(int argc, char *argv[])
{
	double num1 = 0.0;
	double num2 = 0.0;
	char opera;

	printf("\nPlease input the calc:\n");
	scanf("%lf %c %lf", &num1, &opera, &num2);

	switch(opera)
	{
		case '+':
			printf("= %lf\n", num1 + num2);
			break;
		
		case '-':
			printf("= %lf\n", num1 - num2);
			break;

		case '*':
			printf("= %lf\n", num1 * num2);
			break;

		case '/':
			if(num2 == 0)
			{
				printf("\nDevision by zero error!!\n");	
			}else{
				printf("= %lf\n", num1 - num2);
			}

			break;

		
		case '%':
			if((long) num2 == 0)
			{
				printf("\nDevision by zero error!!\n");	
			}else{
				printf("= %ld\n", (long)num1 % (long)num2);	
			}

			break;

		default:
			printf("Invalid operation type!\n");
			break;
	}

	return 0;
}
