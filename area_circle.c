#include<stdio.h>
#define PI 3.14

int main()
{
	float radius,area;
	printf("Enter the radius of Circle\n");
	scanf("%f",&radius);
	
	area = PI * radius * radius;
	printf("Area of Circle Is : %.2f\n",area);
	return 0;
}
