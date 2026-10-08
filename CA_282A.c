#include <stdio.h>

int main(void) {
    int n, x = 0;
    char s[4];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%3s", s);
        for (int j = 0; j < 3; j++) {
            if (s[j] == '+') { x++; break; }
            if (s[j] == '-') { x--; break; }
        }
    }
    printf("%d", x);
    return 0;
}