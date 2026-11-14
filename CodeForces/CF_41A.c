#include <stdio.h>
#include <string.h>
#define MAXN 105

int main(){
    char before[MAXN];
    char after[MAXN];
    scanf("%s %s", before, after);
    char trans[MAXN];
    int len = strlen(before);
    int j = 0;
    for(int i = len-1; i >= 0; i--){
       trans[j] = before[i];
        j++;
    }
    trans[j] = '\0';
    if(strcmp(after, trans) == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}