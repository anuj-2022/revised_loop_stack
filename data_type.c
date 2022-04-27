#include <stdio.h>      

int main() 
{
  short a;
  long b;
  long long c;
  long double d;
  
  int aa;
  char bb;
  float cc;
  double dd;

  signed int ee;
  unsigned int ff;

  signed char gg;
  unsigned char hh;

  printf("size of short = %d bytes\n", sizeof(a));
  printf("size of long = %d bytes\n", sizeof(b));
  printf("size of long long = %d bytes\n", sizeof(c));
  printf("size of long double= %d bytes\n", sizeof(d));
  
  printf("size of int = %d bytes\n", sizeof(aa));
  printf("size of char = %d bytes\n", sizeof(bb));
  printf("size of float = %d bytes\n", sizeof(cc));
  printf("size of  double= %d bytes\n", sizeof(dd));

  printf("size of signed int = %d\n",sizeof(ee));
  printf("size of unsigned int = %d\n",sizeof(ff));
  printf("size of signed char = %d\n",sizeof(gg));
  printf("size of unsigned char = %d\n",sizeof(hh));
  
  return 0;
}
