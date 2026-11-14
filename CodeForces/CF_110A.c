#include <stdio.h>

int main(){
    int x;
    int n = 0;
    scanf("%d", &x);
    while(x != 0){
        int pred = x % 10;
        if(pred == 4 || pred == 7){
            n++;
        }
        x = x / 10;
    }
    if(n == 4 || n == 7){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}