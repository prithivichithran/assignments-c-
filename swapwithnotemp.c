#include<stdio.h>

int main() {
   int a=10,b=20,c,x,y;
   c=a+b;
   x=c-a;
   y=c-b;
   a=x;
   b=y;
   printf("a value is %d\n",a);
   printf("b value is %d\n",b);
}
