#include<stdio.h>
int main()
{
    int min;
    double day,year,month,week,hr,y,d,m,h,w;
    printf("Enter Minutes\n");
    scanf("%d",&min);
    y=60*24*365;
    d=60*24;
    m=60*24*28;
    w=60*24*7;
    h=60;
    year=(min/y);
    day=(min/d);
    hr=(min/h);
    month=(min/m);
    week=(min/w);   
    printf("Year is %f\nDays is %f\nHours are %f\nMonths are %f\nWeeks are %f\n",year,day,hr,month,week);
    return (0);
}
