/*Theatre Square in the capital city of Berland has a rectangular shape with the size
n × m meters. On the occasion of the city's anniversary, a decision was taken to
pave the Square with square granite flagstones. Each flagstone is of the size a × a.
What is the least number of flagstones needed to pave the Square? It's allowed to
cover the surface larger than the Theatre Square, but the Square has to be covered.
It's not allowed to break the flagstones. The sides of flagstones should be parallel
to the sides of the Square.

Input
The input contains three positive integer numbers in the first
line: n,  m and a (1 ≤  n, m, a ≤ 109).
Output
Write the needed number of flagstones.
Example:
Input : 6 6 4
Output: 4 */

#include <stdio.h>

int main() {
    int n, m, a;
    scanf("%d %d %d", &n, &m, &a);
    int flagstones_length = (n + a - 1) / a;
    int flagstones_width = (m + a - 1) / a;
    int total_flagstones = flagstones_length * flagstones_width;
    printf("%d\n", total_flagstones);
     printf("24CE074  prachi");
    return 0;
}






