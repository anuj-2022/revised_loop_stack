#include<stdio.h> 

int main()
{  
double d,c;
char choice;
printf("enter the two number\n");
scanf("%lf%lf",&d,&c);
printf("enter a choice:\na.ADD\ns.SUBTRACT\n");
    
scanf(" %c",&choice);    
switch(choice)
{    
case 'a':    
printf("addition of two number is %lf\n",d+c);    
break;    
case 's':    
printf("subtraction of two number is %lf\n",d-c);    
break;    
printf("defaut case- noaction\n");    
}    
return 0;  
}    

