#include <stdio.h>
int main(){
    int a = 15;
    int *pa = &a;
    *pa = 12;
    printf("%d", a);
    return 0;
}