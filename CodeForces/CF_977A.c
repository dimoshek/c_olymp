#include <stdio.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    for(int i = 0; i < k; i++){
        int last = n % 10;
        if(last == 0){
            n = n / 10;
        }
        else{
            n = n - 1;
        }
    }
    printf("%d", n);
    return 0;
}