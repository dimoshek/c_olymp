#include <stdio.h>
#define MAXN 10
int main(){
    int year;
    scanf("%d", &year);
    int digit[MAXN] = {0};
    int res = 0;
    while(res == 0){
        year++;
        int new_year = year;                      
        for(int i = 0; i <= 3; i++){
            digit[i] = new_year % 10;
            new_year = new_year / 10;
        }
        int n = 0;
        for(int i = 0; i <= 2; i++){
            for(int j = i + 1; j <= 3; j++){      
                if(digit[i] != digit[j]){
                    n++;
                }
            }
        }
        if(n == 6){                               
            res++;
        }
    }
    printf("%d", year);
    return 0;
}