#include<stdio.h>
int main()
{
    int n;
    float a,b,c;
    printf("Enter Two Values For Calculations\n");
    scanf("%f %f",&a,&b);
    printf("Enter The Operations\n1.Addition\n2.Subraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("%.2f + %.2f =%.2f\n",a,b,c=a+b);
        break;
        case 2:
        printf("%.2f - %.2f =%.2f\n",a,b,c=a-b);
        break;
        case 3:
        printf("%.2f * %.2f =%.2f\n",a,b,c=a*b);
        break;
        case 4:
        if(b==0 || a==0)
        {
        printf("Cannot divide by Zero\n");
        }
        else
        {
        printf("%.2f / %.2f =%.2f",a,b,c=a/b);
        }
        break;
        default :
        printf("Enter From options\n");
        break;
    }
}
