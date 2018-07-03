#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int postive(int x)
{
printf("The postive Value Of %d = %d\n",x,-x);
}
int gcd(int a, int b)
{
    if (a == 0 || b == 0) // Everything divides 0
       return 0;
    if (a == b)      // base case
    return a;
     if (a > b)     // a is greater
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int sqt(float n)
{
    printf("Enter a positive Value\n");
    scanf("%f",&n);
    if(n<=0)
    {
        printf("You have Entered Negative/Zero^th Value\n");
    }
    else{
    printf("Square Root Of The %f Value is %.2f",n,sqrt(n));
    }
    }
int main()
{
	int x,a,b,n;
	printf("Enter the Negative Value\n");
	scanf("%d",&x);
	postive(x);
	printf("Enter Two values to find Gcd\n");
	scanf("%d %d",&a,&b);
	gcd(a,b);
	printf("Gcd of %d and %d is %d\n",a,b,gcd(a,b));
	sqt(n);
	return 0;
}