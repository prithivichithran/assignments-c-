#include <stdio.h>
int prime(int num) 
{
int a,flag;
for(a=2;a<num;a++) 
{
if(num%a!=0)
{
flag=1;
}
else 
{
flag=0;
break;
}
}
if(flag==1||num==2)
return(1);
else
return(0);
}
int main()
{
int i,j,k,rows,num=0;
printf("Enter number of rows: ");
scanf("%d",&rows);
for(i=1; i<=rows;i++)
{
for(j=1;j<=rows-i;j++)
{
printf("  ");
}
for(k=0;k!=2*i-1;k++)
{
while(!prime(num)) 
{
num++;
}
printf("%d ",num++); 
}
printf("\n");
}
return 0;
}
