 /*Check if number is a Perfect Number (sum of divisors equals the num)
A Perfect Number is a positive integer that is equal to the sum of its proper
divisors, excluding itself */
#include<stdio.h>
int main()
{
    int number,sum=0,divisiors;

    printf("enter the number: ");
    scanf("%d",&number);

    printf("divisors is(excluding %d) :  ",number);
    for(int i=1; i<number; i++)
    {
        if(number%i==0)
        {
           printf("%d ",i);
            sum+=i;
        }
    }

    printf("\n The Sum Is: %d \n",sum);
    if(sum==number)
    {
        printf("The Number Is Perfact");
    }
    else
    {
        printf("The Number Is Not Perfact");
    }
     printf("24CE074  prachi");
    return 0;

}
