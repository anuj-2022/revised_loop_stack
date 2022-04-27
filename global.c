#include <stdio.h>
void display();

int n = 5;  // global variable
int m;
int main()
{
    ++n;
    printf("default value of global variable m = %d\n",m);     
    display();
    return 0;
}

void display()
{
    ++n;   
    printf("n = %d", n);
}
