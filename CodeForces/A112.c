#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXN 105


int main(){
    char str1[MAXN];
    char str2[MAXN];
    scanf("%s", str1);
    scanf("%s", str2);
    for(int i = 0; str1[i] != '\0'; i++){
        str1[i] = tolower((unsigned char)str1[i]);
    }

    for(int i = 0; str2[i] != '\0'; i++){
        str2[i] = tolower((unsigned char)str2[i]);
    }

    int res = strcmp(str1, str2);
    if(res < 0){
        printf("-1");
    }
    else if(res > 0){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}