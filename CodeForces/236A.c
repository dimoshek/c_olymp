#include <stdio.h>
#include <string.h>
#define MAXN 105
int main(){
    char name[MAXN];
    int letters[26] = {0};
    int j = 0;
    int res = 0;
    scanf("%s", name);
    for(int i = 0; name[i] != '\0'; i++){
        if(letters[name[i] - 'a'] != 1){
            res++;
            letters[name[i] - 'a'] = 1;
        }
    }
    if(res % 2 == 0){
        printf("CHAT WITH HER!");
    }
    else{
        printf("IGNORE HIM!");
    }
    return 0;
}