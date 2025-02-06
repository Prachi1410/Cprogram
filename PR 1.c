//Write a Program to Find the Length of the String Without using strlen() Function.

#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int len=0;

    printf("enter the str what length you find");
    gets(str);
    for(int i=1;str[i]!=0;i++)
    {

        len++;
    }
    printf("length of str =%d",len);
    printf("24CE074  prachi");
    return 0;
}
