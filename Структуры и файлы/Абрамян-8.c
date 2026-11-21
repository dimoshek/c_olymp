#include <stdio.h>
#define MAXN 100

int main(){
    FILE *f1 = fopen("input-8.txt", "r");
    double first, last, x;
    fscanf(f1, "%lf", &first);
    last = first;
    
    while (fscanf(f1, "%lf", &x) == 1) last = x;
    fclose(f1);

    FILE *f2 = fopen("output-8.txt", "w");
    fprintf(f2, "%g\n%g\n", first, last);
    fclose(f2);
}