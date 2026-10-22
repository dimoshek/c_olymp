#include <stdio.h>
#define MAXN 1005
#include <string.h>
#include <ctype.h>
int main(){
    char word[MAXN];
    scanf("%1005s", word);
    char cap = word[0];
    cap = toupper((unsigned char)cap);
    int len = (int)strlen(word);
    printf("%c", cap);
    for(int i = 1; i <= len-1; i++){
        printf("%c", word[i]);
    }
    return 0;
}