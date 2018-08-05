#include<stdio.h>
int main()
{
int i,n,j=1,a;
printf("Enter the rows\n");
scanf("%d",&n);
printf("Enter the columns\n");
scanf("%d",&a);
printf("\n\u250C");
for(i=1;i<n;i++)
	{
	printf("\u2500\u252C");
	}
printf("\u2500\u2510\n");
	while(j<a)
		{
		printf("\u251C");
			for(i=1;i<n;i++)
			{
			printf("\u2500\u253C");
			}
			printf("\u2500\u2524\n");
		j++;
		}
		printf("\u2514");
		for(i=1;i<n;i++)
			{
			printf("\u2500\u2534");
			}
printf("\u2500\u2518\n");
return 0;
}

