#include <stdio.h>
#define MAXN 100

typedef struct {
    int x;
    int y;
} point;

int main() {
    int n;  // сколько точек будет в массиве
    scanf("%d", &n);
    if (n < 1 || n > MAXN) return 1;  // защита от выхода за границы массива

    point arr[MAXN];  // массив точек
    point q;          // искомая точка

    // Ввод точек массива
    for (int i = 0; i < n; i++)
        scanf("%d %d", &arr[i].x, &arr[i].y);

    // Ввод точки, которую нужно найти
    scanf("%d %d", &q.x, &q.y);

    int count = 0;  // счётчик совпадений

    // Перебор массива: точка совпадает, если равны и x, и y
    for (int i = 0; i < n; i++)
        if (arr[i].x == q.x && arr[i].y == q.y)
            count++;

    printf("%d\n", count);
    return 0;
}
