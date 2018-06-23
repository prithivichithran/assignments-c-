#include <stdio.h>
#include <stdlib.h>
int main()
{
    int p,i,prime[50]={2,3},n=2,c;
    for(p=5;p<=100;p=p+2)
    {
        c=0;
        for(i=1;p/prime[i]>=prime[i];++i)
        {
            if(p%prime[i]==0)
            c=1;
        }
        if(c==0)
            {
            prime[n]=p;
            n++;
            }
    }
    printf("The Prime numbers are\n");
    for(i=0;i<n;++i )
    {
        printf("%2i\n",prime[i]);
    }
    return 0;
}
