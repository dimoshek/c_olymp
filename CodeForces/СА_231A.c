#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int ex[n][3];
    int n_pro = 0;

    for (int i = 0; i < n; i++) {
        int pro = 0;
        for (int j = 0; j < 3; j++) {
            scanf("%d", &ex[i][j]);
            if (ex[i][j] == 1) {
                pro++;
            }
        }
        if (pro >= 2) {
            n_pro++;
        }
    }
    printf("%d", n_pro);
    return 0;
}