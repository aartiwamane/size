#include<stdio.h>

int main()
{
  char ch='A';
  int i=11;
  float f=3.14;
  double d=9.567;
  
  printf("values from the variables are:\n");
  printf("%c\n",ch);
  printf("%d\n",i);
  printf("%f\n",f);
  printf("%lf\n",d);

  printf("size of each variable\n");
  printf("size of character:%d\n",sizeof(ch));
  printf("size of integer:%d\n",sizeof(i));
  printf("size of float:%d\n",sizeof(f));
  printf("size of double:%d\n",sizeof(d));

  printf("address of each variable\n");
  printf("size of character:%p\n",&ch);
  printf("size of integer:%p\n",&i);
  printf("size of float:%p\n",&f);
  printf("size of double:%p\n",&d);


 return 0;
}