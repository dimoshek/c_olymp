/* Массив посетителей аттракционов. Идея: Щеглова Ксения, 201ИС-25.
Реализация. Сизов Дмитрий, 12.11.2026 
3. Выбрать самые лучшие и самые худшие аттракционы 
(по среднему рейтингу). Написать функцию "Средний рейтинг".
 */

#include <stdio.h>
#include <string.h>
#define MAXN 1000

typedef struct {
    int id;                 // ИД
    char visitor_name[20];  // Имя посетителя
    char attrack_name[40];  // Название аттракциона
    unsigned char rating;   // Рейтинг от 0 до 100
} Visitor;

// Средний рейтинг аттракциона по названию
double rating_avg(Visitor arr[], const char *name, int n) {
    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(arr[i].attrack_name, name) == 0) {
            sum += arr[i].rating;  // рейтинг текущей записи
            cnt++;
        }
    }
    if (cnt == 0) return 0;
    return (double)sum / cnt;
}

// Лучший и худший аттракционы по среднему рейтингу
void best_worst(Visitor arr[], int n) {
    int best = 0;
    int worst = 0;

    double best_avg = rating_avg(arr, arr[0].attrack_name, n);
    double worst_avg = best_avg;

    for (int i = 1; i < n; i++) {
        double avg = rating_avg(arr, arr[i].attrack_name, n);
        if (avg > best_avg) {
            best_avg = avg;
            best = i;
        }
        if (avg < worst_avg) {
            worst_avg = avg;
            worst = i;
        }
    }

    printf("Лучший: %s (%.2f)\n", arr[best].attrack_name, best_avg);
    printf("Худший: %s (%.2f)\n", arr[worst].attrack_name, worst_avg);
}

int main() {
    Visitor array[MAXN];
    int count;

    scanf("%d", &count);
    if (count < 1 || count > MAXN) return 1;

    for (int i = 0; i < count; ++i) {
        scanf("%d %19s %39s %hhu",
              &array[i].id,
              array[i].visitor_name,
              array[i].attrack_name,
              &array[i].rating);
    }

    printf("\n");
    best_worst(array, count);
    return 0;
}