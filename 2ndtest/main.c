#include <stdio.h>
int main()
{
    double l,b,Area,perimeter; //Initializing the Required Data types for Specific Pgm
    printf("Enter The Value Of Length\n"); //Getting The Length From User
    scanf("%lf",&l);
    printf("Enter The Value Of Breadth\n"); //Getting The Breadth From User
    scanf("%lf",&b);
    perimeter=2*(l+b);
    Area=l*b;
    printf("The Area Of Rectangle is %lf\n",Area);
    printf("Perimeter Of Rectangle is %lf\n",perimeter);
    return 0;
}
