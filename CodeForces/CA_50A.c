#include <stdio.h>
int main(){
    int m, n;
    scanf("%d %d", &m, &n);
    int pole = m * n;
    int fill = pole / 2;
    printf("%d", fill);
    return 0;
}