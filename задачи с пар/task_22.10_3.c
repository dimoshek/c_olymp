#include <stdio.h>
#define MAXN 100
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

char my_itoa(int x){
    char num[MAXN] = 0;
    int i = 0;
    int digit = 0;
    if(x == 0){
        num[0] = '0';
        num[1] = '\0';
    }
    while(x > 0){
        digit = x % 10;
        num[i] = '0' + digit;
        x = x / 10;
        i++;
    }
    num[i] = '\0';
    my_reverse(num);
    return num;
}
int main(){
   int x;
   scanf("%d", &x);
   char num[MAXN] = my_itoa(x);
    printf("%s", num);
    return 0;
}