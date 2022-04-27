#include<stdio.h>

int main()
{
	int i,j,d;
	printf("Enter the value:\n");
	scanf("%d",&d);
	
	for(i=1;i<=d;i++)
	{
		for(j=1;j<=i;j++)
		printf("%d ",i);
	}
	printf("\n");
return 0;
}
	
