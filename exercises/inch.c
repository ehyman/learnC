#include <stdio.h>

int main(int argc, char *argv[])
{
	double feet = 0.0;
	double inch = 0.0;
	double yd = 0.0;

	printf("Please input the distance(feet) : ");
	scanf("%lf", &feet);
	
	inch = feet / 12;
	yd = feet / 12 / 3;
	
	printf("%.2f feet is %.2f inches\n", feet, inch);
	printf("%.2f feet is %.2f yd\n", feet, yd);

	return 0;
}
