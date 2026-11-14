
#include <stdio.h>
#define MAXN 100005
#include <string.h>

int main(){
    int n;
    scanf("%d", &n);
    int n_ant = 0;
    int n_dan = 0;
    char part[MAXN];
    scanf("%s", part);
    for(int i = 0; part[i] != '\0'; i++){
        if(part[i] == 'A'){
            n_ant++;
        }
        if(part[i] == 'D'){
            n_dan++;
        }
    }
    if(n_ant > n_dan){
        printf("Anton");
    }
    if(n_ant < n_dan){
        printf("Danik");
    }
    if(n_ant == n_dan){
        printf("Friendship");
    }
    return 0;
}