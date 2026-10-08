#include <stdio.h>
#include <math.h>

double a[140000];

int main(void) {
    int n = 0;
    while (n < 140000 && scanf("%lf", &a[n]) == 1) {
        n++;
    }
    for (int i = n - 1; i >= 0; i--) {
        printf("%.4f\n", sqrt(a[i]));
    }
    return 0;
}