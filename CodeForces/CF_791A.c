#include <stdio.h>
int main(){
    int lim, bob;
    scanf("%d %d", &lim, &bob);
    int res = 0;
    int n = 0;
    while(res == 0){
        lim = lim * 3;
        bob = bob * 2;
        if(lim <= bob){
            n++;
        }
        else{
            n++;
            res++;
        }
    }
    printf("%d", n);
    return 0;
}