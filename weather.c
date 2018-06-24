#include<stdio.h>
int main()
{
float rainfall[5][12]={ {45.0,33.6,67.8,56.8,12.77,65.8,44.0,36.6,87.8,96.8,18.77,95.8}, //harcoding rainfall as per instructor
                        {35.0,23.5,07.8,6.8,2.77,5.8,46.4,100.6,167.8,156.8,112.77,165.8}, //harcoding rainfall as per instructor
                        {25.0,45.3,54.8,23.8,2.77,25.8,5.0,32.6,47.8,156.8,112.77,165.8}, //harcoding rainfall as per instructor
                        {13.2,23.2,6.2,52.1,13.7,25.1,25.4,23.1,27.2,52.1,112.77,199.8}, //harcoding rainfall as per instructor
                        {45.0,33.6,67.8,56.8,12.77,65.8,45.0,33.6,67.8,56.8,12.77,65.8},  //harcoding rainfall as per instructor
                      },frstyear,frstmon,a;
int i,j,k=10;
printf("YEAR\t\tRAINFALL\n");
for(i=0;i<5;i++)
{
    frstyear=0;
    for(j=0;j<12;j++)
    {
        frstyear=frstyear+rainfall[i][j];
    }
    printf("20%d\t\t%.2f\n",k,frstyear);
    k++;
    a+=frstyear;
}
printf("\nThe Yearly Rainfall for(2010-2014)%.2f\n",a/5);
printf("MONTHLY AVERAGE\n");
printf("JAN\tFEB\tMAR\tAPR\tMAY\tJUN\tJUL\tAUG\tSEP\tOCT\n");
for(j=0;j<10;j++)
{
    frstmon=0;
    for(i=0;i<5;i++)
    {
        frstmon=frstmon+rainfall[i][j];
    }
    printf("%.2f\t",frstmon/5);
}
printf("\nNOV\tDEC\n");
for(j=10;j<12;j++)   //Seperating last 2months for clear visibility of output!
{
    frstmon=0;
    for(i=0;i<5;i++)
    {
        frstmon=frstmon+rainfall[i][j];
    }
    printf("%.2f\t",frstmon/5);
}
return 0;
}
