/*Write a Program for Finding the Roots of a Quadratic Equation. */

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;
    scanf("%f %f %f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
         if (discriminant >= 0)
             {
               root1 = (-b + sqrt(discriminant)) / (2 * a);
               root2 = (-b - sqrt(discriminant)) / (2 * a);
               printf("%.2f %.2f\n", root1, root2);
              }
         else
        {
           printf("No Real Roots\n");
        }
     printf("24CE074  prachi");

    return 0;
}
