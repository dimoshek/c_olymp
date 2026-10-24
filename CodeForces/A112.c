/* 24.10.2026 Сизов Д.
Строки. Сравнение строк без учета регистра. */
/* Задание. Вывести -1, если первая строка меньше, 1 - если больше, 0 - если равны */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXN 105
int main() {
    char str1[MAXN];
    char str2[MAXN];
    int i;
    int res;
    scanf("%s", str1);
    scanf("%s", str2);
    /* Приведение к нижнему регистру */
    for (i = 0; str1[i] != '\0'; ++i) {
        str1[i] = tolower((unsigned char)str1[i]);
    }
    for (i = 0; str2[i] != '\0'; ++i) {
        str2[i] = tolower((unsigned char)str2[i]);
    }
    /* Сравнение */
    res = strcmp(str1, str2);
    if (res < 0) {
        printf("-1");
    }
    else if (res > 0) {
        printf("1");
    }
    else {
        printf("0");
    }

    return 0;
}
