#include <stdio.h>
int pairs(int w){
    int b = (w-1)/2;
    int res = 0;
    for(int a = 1; a < w; a++){
        if(a % 2 == 0 && (w - a) % 2 == 0) {
            return 1;
        }
}
return 0;
}
int main(){
    int w;
    scanf("%d", &w);
    if (pairs(w) == 1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
