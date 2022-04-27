#include<stdio.h>
#define S 5

int Front=-1;
int Rear=-1;
int q[S];

void enque(int data);
void deque();
void display();

int main()
{
	enque(1);
	enque(2);
	enque(3);
	display();
	deque();
	display();
	deque();
	display();
}

void enque(int data)
{
	if(Rear==S-1)                  
	{
		printf("queue is full:\n");
		return;
	}
	else
	{
	    if(Front==-1)     
	    Front=0;
	    Rear++;
	    q[Rear]=data;
	}
}
void deque()
{
	if(Front==-1)
	{
		printf("queue is empty\n");
		return;
	}
	else
	{
	    printf("deleted data is %d\n",q[Front]);
	    Front++;
	}
}
void display()
{
    if(Rear==-1)
    {
        printf("queue is empty\n");
    }
    else
    {
 	   int i;
	   for(i=Front;i<=Rear;i++)
	   printf("%d\n",q[i]);
    }
}

