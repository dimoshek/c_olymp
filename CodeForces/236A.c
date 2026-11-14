/* 24.10.2026 Сизов Д.
Строки. Подсчет различных букв в имени. */
/* Задание. Если число различных букв четное - CHAT WITH HER!, иначе - IGNORE HIM! */
#include <stdio.h>
#include <string.h>
#define MAXN 105
#define ALPHABET 26
int main() {
    char name[MAXN];
    /* letters[k] = 1, если буква ('a' + k) уже встречалась */
    int letters[ALPHABET] = {0};
    int res = 0;
    int i;
    scanf("%s", name);
    /* Подсчет различных букв */
    for (i = 0; name[i] != '\0'; ++i) {
        if (letters[name[i] - 'a'] != 1) {
            ++res;
            letters[name[i] - 'a'] = 1;
        }
    }
    /* Вывод результата */
    if (res % 2 == 0) {
        printf("CHAT WITH HER!");
    }
    else {
        printf("IGNORE HIM!");
    }

    return 0;
}
