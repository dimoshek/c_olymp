#include <stdio.h>
#define MAXN 50
int main(){
    int n, k;
    int a[MAXN];
    scanf("%d %d", &n, &k);
    int n_part = 0;
    int i = 0;
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < n; i++){
        if(a[i] >= a[k-1] && a[i] != 0){
            n_part++;
        }
    }
        printf("%d", n_part);
    return 0;
}