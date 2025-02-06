//Write a Program to Check Whether a Number is an Armstrong Number or Not.

#include<stdio.h>
#include<string.h>
int main()
{
    int num,result=0,power=1,reminder,n=0;
    printf("enter the number");
    scanf("%d",&num);
    for(int i=num;i!=0;i/=10)
    {

        n++;

    }
    for(int i=num;i!=0;i/=10){
     reminder=i%10;
     power=1;
        for(int j=0;j<n;j++)
        {

            power*=reminder;
        }
        result+=power;

        }
        printf("result is %d\n",result);
        if(result==num)
        {

            printf("%d is Armstrong Number\n",num);
        }
        else{
            printf("%d is not Armstrong Number\n",num);
        }
         printf("24CE074  prachi");
        return 0;
}

