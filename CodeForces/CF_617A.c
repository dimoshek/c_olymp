#include <stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int res = x / 5;
    if (x % 5 != 0){
        res++;
    }
    printf("%d", res);
    return 0;
}