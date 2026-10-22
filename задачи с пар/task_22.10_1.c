#include <stdio.h>
#define MAXN 100
int my_atoi(char s[]){
    int result = 0;
    for(int i = 0; s[i] != '\0'; i++){
        result = result * 10 + (s[i] - '0');
    }
    return result;
}
int main(){
    char s[MAXN];
    scanf("%s", s);
    int result = my_atoi(s);
    printf("%d\n", result);
    return 0;
}