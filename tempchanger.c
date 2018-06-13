#include<stdio.h>
int main()
{
 int cel,feh;
 double fah,cal;
 printf("Enter The celcius value\n");
 scanf("%d",&cel);
 printf("Enter THe Other Fahrenheit value\n");
 scanf("%d",&feh);
 fah=(cel*1.8)+32;
 cal=(feh-32)/1.8;
 printf("%d(celcius) value in Fahrenheit is%f\n",cel,fah);
 printf("%d(Fahrenheit) value in Celcius is%f\n",feh,cal);
 return (0);
}
