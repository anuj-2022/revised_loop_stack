#include<stdio.h>
#include<stdlib.h>

int stack1[5],stack2[5],top1=-1,top2=-1;

void enque(int data);
int deque();
int value;

int main()
{
	int choice;
	while(1)
	{
		printf("1.enque\n2.deque\n3.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the value\n");
				scanf("%d",&value);
				enque(value);
				break;
			case 2:
				printf("value popped %d\n",deque());
				break;
			case 3:
				exit(0);
		}
	}
}
void enque(int data)
{
	stack1[++top1]=data;//store the data in stack1
}

int deque()
{
	while((top1)!=-1)
	{
//		printf("popped data is %d\n",stack1[top1]);
		stack2[++top2]=stack1[top1--];//copy the data one stack1 to stack2
	}
	return stack2[top2--];
}

