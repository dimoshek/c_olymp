#include <stdio.h>
#include <string.h>
#define MAX 100
#define MAXLEN 101
int main(){
    char words[MAX][MAXLEN];
    int n_letters = 0;
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%100s", words[i]);
    }
    for(int i = 0; i < n; i++){
        int len = strlen(words[i]); 
        if(len > 10){
            printf("%c%d%c\n", words[i][0], len-2, words[i][len - 1]);
        }
        else{
            printf("%s\n", words[i]);
        }
    }
    return 0;
}