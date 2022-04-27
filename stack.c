#include<stdio.h>
#include<stdlib.h>
#define S	4

int Stack[S];
int Top=-1;
void push(int data);
void pop();
void display();

void main()
{
	push(1);
	push(2);
	push(3);
	display();
	pop();
	display();
}

void push(int data)
{
	if(Top==S-1)
	{
		printf("stack is full\n");
		exit(0);
	}
	else
	{
	Top++;
	Stack[Top]=data;
	}
}

void pop()
{
	if(Top==-1)
	{
                printf("stack is empty\n");
                exit(0);
        }
	else
	{
		printf("poped data is %d\n",Stack[Top]);
		Top--;
	}
	
}

void display()
{
	int i;
	if(Top==-1)
        {
                printf("stack is empty\n");
                exit(0);
        }
	
	for(i=0;i<=Top;i++)
	printf("%d\n",Stack[i]);
}


