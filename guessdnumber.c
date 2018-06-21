#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    time_t t;
    srand((unsigned)time(&t)); // initializing random numbers
    int a,guess,n,mynum;
    mynum=rand()%11; // get the random number
    printf("This is guess that number game\nYou have 5 tries you must guess the number between 0 to 10\n");
    for(n=5;n>0;--n)
    {
        printf("You have %d Tries Left\n",n);
        printf("Enter Your Guess\n");
        scanf("%i",&guess);
        if(mynum==guess)
        {printf("You have Guessed The Number %d correctly with %i tries left\n",mynum,n);
         break;
        }
        else if(0<guess>20)
        {printf("Enter The NUmber Between 0 to 10 You Have Entered %i\n",guess);
        }
        else if(mynum<guess)
        {printf("Your Guess %i is greater than My number *Try Again*\n",guess);
        }
        else if(mynum>guess)
        {printf("Your Guess %i is lesser than my number *Try Again*\n",guess);
        }
        else
        {
        printf("You Have Failed This Game\nYou Have Finished Your Tries\nAnd my number is %i",mynum);
        }
    }

}
