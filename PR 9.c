#include <stdio.h>
#include <math.h>

double lake_depth(int H, int L) {

    return sqrt((double)L * L - (double)H * H) - H;
}

int main() {
    int H, L;


    scanf("%d %d", &H, &L);


    printf("%.6lf\n", lake_depth(H, L));
     printf("24CE074  prachi");

    return 0;
}
