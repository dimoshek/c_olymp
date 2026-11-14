#include <stdio.h>
#define MAXN 100


int main(){
   int x[MAXN];
   int pol[MAXN];
   int k = 0;
   int tmp = 0;
   int n = 0;
    while (n < MAXN && scanf("%d", &x[n]) == 1) {
    n++;
}
   for(int i = 0; x[i] != '\0'; i++){
    if(x[i] > 0){
        pol[k] = x[i];
        k++;
    }
   }
   for(int i = 0; i < k-1; i++){
    for(int j = 0; j < k-1-i; j++){
        if(pol[j] > pol[j+1]){
        tmp = pol[j];
        pol[j] = pol[j+1];
        pol[j+1] = tmp;
        }
    }
   }

   for(int i = 0; pol[i] != '\0'; i++){
    printf("%d ", pol[i]);
   }
}