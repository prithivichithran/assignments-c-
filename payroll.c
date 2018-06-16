#include<stdio.h>
int main()
{
    int hr;
    float pay,total,tax;
    printf("Enter The Working Hours\n");
    scanf("%d",&hr);
    if(hr<=40)
    {
        pay=12*hr;
    }
    else
    {
        pay=12*40;
        pay=pay+((hr-40)*(12*1.5));
    }
    if(pay<=300)
    {
        tax=(.15*pay); //15% tax for gross below $300
    }
    else if(pay>300 && pay<=450)
    {
        tax=(300*.15); //15% tax for gross below $300
        tax=tax+(pay-300)*.20; //20% tax for gross above $300 and below $4503
    }
    else if(pay>450)
    {
        tax=300*.15; //15% tax for gross below $300
        tax=tax+(150*.20); //20% tax for gross remaining $150(between 300 to 450)
        tax=tax+(pay-450)*.25; //25% tax for gross above $450
    }
    total=pay-tax;
    printf("THe gross Salary for working %d hours is %.2f\n",hr,pay);
    printf("THe Net Salary for working %d hours is %.2f\n",hr,total);
    printf("THe tax for working %d hours is %.2f\n",hr,tax);
    return 0;
}
