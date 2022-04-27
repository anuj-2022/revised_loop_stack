#include<stdio.h>

int main()
{
	int i,l=100;
	printf("Even number is :");
	i=2;
	while(i<=l)
	{
		printf("%d,",i);
		i=i+2;
	}
	i=1;
	printf("\nOdd number is :");
	while(i<=l)
	{
		printf("%d,",i);
		i=i+2;
	}
return 0;
}
