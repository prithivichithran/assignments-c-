#include<stdio.h>
int main()
{
    int min;
    double hr,day,month,year;
    printf("Enter Minutes\n");
    scanf("%d",&min);
    hr=min/60;
    day=hr/12;
    month=day/28;
    year=month/12;
    printf("Year is %f\nDays is %f\nHours are %f\nMonths are %f\n",year,day,hr,month);
    return (0);
}
