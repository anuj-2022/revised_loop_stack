#include<stdio.h>

int main()
{
	int i,sum=0,num=0;
	for(i=1;i<=10;i++)
	{
	printf("Enter the number\n");
	scanf("%d",&num);
	if(num<0)
	continue;
	sum+=num;
	}
	printf("sum = %d\n",sum);
return 0;
}
