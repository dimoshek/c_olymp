#include <stdio.h>
#define MAXN 105
#include <string.h>
int main(){
    int digits [MAXN];
    char sum [MAXN];
    scanf("%105s", sum);
    int len = (int)strlen(sum);
    int n = 0;
    for(int i = 0; i < len; i+=2){
        digits[n++] = sum[i] - '0';
    }
    for(int i = 0; i <= n-1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(digits[j] > digits[j+1]){
                int t = digits[j];
                digits[j] = digits[j+1];
                digits[j+1] = t;
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(i > 0){
            printf("+");
        }
        printf("%d", digits[i]);
    }
    return 0;
}