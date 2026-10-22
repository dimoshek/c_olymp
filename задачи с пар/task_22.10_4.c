#include <stdio.h>
#define MAXN 100

int my_strlen(char s[]){
    int result = 0;
    for(int i = 0; s[i] != '\0'; i++){
        result++;
    }
    return result;
}

void my_reverse(char s[]){
    int len = my_strlen(s);
    int left = 0;
    int right = len - 1;
    char tmp;
    while (left < right)
    {
        tmp = s[left];
        s[left] = s[right];
        s[right] = tmp;
        left++;
        right--;
    }
}

void my_itoa(int x, char s[]){
    int i = 0;
    int digit = 0;
    if(x == 0){
        s[0] = '0';
        s[1] = '\0';
        return;
    }
    while(x > 0){
        digit = x % 10;
        s[i] = '0' + digit;
        x = x / 10;
        i++;
    }
    s[i] = '\0';
    my_reverse(s);
}
int main(){
   int x;
   scanf("%d", &x);
   char num[MAXN];
   my_itoa(x, num);
    printf("%s", num);
    return 0;
}