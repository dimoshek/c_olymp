#include <stdio.h>
#define MAXN 256

int main(void) {
    char name[MAXN];
    double a, d;

    printf("Имя файла: ");
    scanf("%255s", name);
    printf("A и D: ");
    scanf("%lf %lf", &a, &d);

   FILE *f = fopen(name, "w");
    if (f == NULL) {
        printf("Не удалось создать файл\n");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        double x = a + i * d;
        fprintf(f, "%g\n", x);
    }

    fclose(f);
    return 0;
}