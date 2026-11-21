#include <stdio.h>

int main() {
    int k;
    scanf("%d", &k);

    FILE *fh = fopen("input-6.txt", "r");
    if (fh == NULL) {
        printf("Не удалось открыть файл\n");
        return 1;
    }

    int a = 0;
    int i = 1;
    while (i <= k) {
        if (fscanf(fh, "%d", &a) != 1) {
            printf("В файле меньше %d чисел\n", k);
            fclose(fh);
            return 1;
        }
        i++;
    }

    printf("%d", a);

    fclose(fh);
    return 0;
}