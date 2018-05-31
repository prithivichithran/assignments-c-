#include <stdio.h>
int main()
{
    int l,b,Area; //Initializing the Required Data types for Specific Pgm
    printf("Enter The Value Of Length\n"); //Getting The Length From User
    scanf("%d",&l);
    printf("Enter The Value Of Breadth\n"); //Getting The Breadth From User
    scanf("%d",&b);
    Area=l*b;
    printf("The Area Of Rectangle is %d\n",Area);
    return 0;
}
