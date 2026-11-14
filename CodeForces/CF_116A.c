#include <stdio.h>

int main() {
    int n, a, b;
    int res = 0, max = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        res = res - a + b;
        if (res > max) {
            max = res;
        }
    }
    printf("%d", max);
}