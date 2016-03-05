#include <stdio.h>

int main(int argc, char *argv[])
{
	float width = 0.0f;
	float height = 0.0f;
	float area = 0.0f;

	printf("please input the width and height: ");
	scanf("%f", &width);
	scanf("%f", &height);
	
	area = width * height;

	printf("The area is: %.2f\n", area);
	
	return 0;
}
