//Write a Program to Toggle Each Character in a String (ex: ip=�FoolonCool� ;
//op=�fOOLONcOOL�).

#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];


    printf("enter the str ");
    gets(str);
    for(int i=0;str[i]!=0;i++)
    {

        if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]+=32;
        }
        else if(str[i]>='a'&&str[i]<='z')
        {

            str[i]-=32;
        }
    }
    printf("  str =%s",str);
    printf("24CE074  prachi");
    return 0;
}
