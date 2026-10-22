#include <stdio.h>
#define MAXN 100
int my_strlen(char s[]){
    int result = 0;
    for(int i = 0; s[i] != '\0'; i++){
        result++;
    }
    return result;
}
int main(){
    char s[MAXN];
    scanf("%s", s);
    int result = strlen(s);
    printf("%d\n", result);
    return 0;
}