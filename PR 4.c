//Write a Program to Calculate the Lowest Common Multiple (LCM) of Two
//Numbers.

#include <stdio.h>

int main() {
    int num1, num2, lcm;


    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);


    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers only.\n");
        return 1;
    }


    lcm = (num1 > num2) ? num1 : num2;


    for( int i=0;lcm % num1 != 0 || lcm % num2 != 0;i++) {
        lcm++;
    }


    printf("The LCM of %d and %d is %d.\n", num1, num2, lcm);
   printf("24CE074  prachi");

    return 0;
}

