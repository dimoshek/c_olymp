//объявление переменных и их адресов
#include <stdio.h>
int main(){
    int a = 15;
    int *pa = &a;
    char b;
    char *pb;
    float c;
    float *pc;
    pc = pb;

    printf("%p %p %p", &pa, &pb, &pc);
    return 0;
}