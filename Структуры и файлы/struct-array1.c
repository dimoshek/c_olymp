/* Массив структур */
/* ОАиП, КМПО РАНХиГС 201-202ИС-25, 16.11.2026, Гусятинер Л.Б. */
/* Начнем работать с одной таблицей «Продавцы», структура Saler
1.Создадим массив структур.
1.1. Вариант 1. проинициализируем элементы
Вариант 2. Введем с клавиатуры
1.2. Распечатаем
2. Выполним запрос по массиву.
*/
#include <stdio.h>
#include <locale.h>
#include <string.h>
#define MAXN 100  // максимальное количество записей в каждом массиве


// Структура покупателя
typedef struct {
    int id_customer;
    char name[20];
    char city[20];
    int saler_id;  // код продавца, который обслуживает покупателя
} customer;


// Структура продавца
typedef struct {
    int id_saler;
    char name[20];
    char city[20];
    float comm;  // комиссионные
} saler;


// Структура заказа
typedef struct {
    int order_id;
    int amount;       // сумма заказа
    int saler_id;     // кто продал
    int customer_id;  // кто купил
} order;


// ---------- Вывод таблиц ----------

// Вывод таблицы всех продавцов
void select_all_salesmen(saler arr[], int n){

    // Шапка таблицы
    printf("\nСписок продавцов фирмы \"Рога и Co\"\n\n");
    printf("Код\tФамилия \tГород   \tКомиссионные\n");
    printf("====================================================\n");

    // Вывод строк
    for(int i = 0; i < n; i++){
        printf("%d\t%-15s\t%-15s\t%.2f\n", arr[i].id_saler, arr[i].name, arr[i].city, arr[i].comm);
    }
}


// Вывод таблицы всех заказов
void select_all_orders(order arr[], int n){
    // Шапка таблицы
    printf("\nСписок заказов фирмы \"Рога и Co\"\n\n");  
    printf("Код заказа\tСумма \tКод продавца   \tКод клиента\n");
    printf("====================================================\n");

    // Вывод строк
    for(int i = 0; i < n; i++){
        printf("%d\t\t%dр\t\t%d\t\t%d\n", arr[i].order_id, arr[i].amount, arr[i].saler_id, arr[i].customer_id); 
    }
}


// Вывод таблицы всех покупателей
void select_all_customers(customer arr[], int n){

    // Шапка таблицы
    printf("\nСписок покупателей фирмы \"Рога и Co\"\n\n");
    printf("Код\tФамилия \tГород   \tКод продавца\n");
    printf("====================================================\n");

    // Вывод строк
    for(int i = 0; i < n; i++){
        printf("%d\t%-15s\t%-15s\t%d\n", arr[i].id_customer, arr[i].name, arr[i].city, arr[i].saler_id);
    }
}

void select_salesmen_reverse(saler arr[], int n){
	saler tmp[MAXN];

	for(int i = 0; i < n; i++){
		tmp[i] = arr[i];
	}

	for(int i = 0; i < n - 1; i++){
		for(int j = 0; j < n - i - 1; j++){
			if(strcmp(tmp[j].name, tmp[j+1].name) < 0){
				saler t = tmp[j];
				tmp[j] = tmp[j+1];
				tmp[j+1] = t;
			}
		}
	}

	select_all_salesmen(tmp, n);
}


// ---------- Загрузка из файлов ----------
// Все функции читают записи до конца файла (или до MAXN)
// и возвращают количество прочитанных записей

int load_salesmen(saler arr[], const char *filename){
    FILE *fh = fopen(filename, "r");
    if(fh == NULL){
        printf("Не удалось открыть файл \"%s\"\n", filename);
        return 0;
    }

    int total = 0;
    // fscanf вернёт 4, пока строки читаются нормально
    while(total < MAXN && fscanf(fh, "%d %19s %19s %f", &arr[total].id_saler, arr[total].name, arr[total].city, &arr[total].comm) == 4) {
        total++;
    }

    fclose(fh);
    return total;
}


int load_customer(customer arr[], const char *filename){
    FILE *fh = fopen(filename, "r");
    if(fh == NULL){
        printf("Не удалось открыть файл \"%s\"\n", filename);
        return 0;  
    }

    int total = 0;
    while(total < MAXN && fscanf(fh, "%d %19s %19s %d", &arr[total].id_customer, arr[total].name, arr[total].city, &arr[total].saler_id) == 4){
        total++;
    }
    fclose(fh);
    return total;
}


int load_orders(order arr[], const char *filename){
    FILE *fh = fopen(filename, "r");
    if(fh == NULL){
        printf("Не удалось открыть файл \"%s\"\n", filename);
        return 0;  
    }

    int total = 0;
    while(total < MAXN && fscanf(fh, "%d %d %d %d", &arr[total].order_id, &arr[total].amount, &arr[total].saler_id, &arr[total].customer_id) == 4){
        total++;
    }

    fclose(fh);
    return total;
}


// ---------- Меню ----------

// Вывод меню
void show_menu(){
    printf("====================================\n");
    printf("          МЕНЮ ПРОГРАММЫ\n");
    printf("====================================\n");
    printf("1. Показать всех продавцов\n");
    printf("2. Показать всех покупателей\n");
    printf("3. Показать все заказы\n");
	printf("4. Показать всех продавцов в обратном алфавиту порядке\n");
    printf("0. Выход\n");
    printf("====================================\n");
}


int main(){
    setlocale(LC_ALL, "RUS");

    // Массивы данных
    saler sales_people[MAXN];
    customer cus_people[MAXN];
    order ord_things[MAXN];

    // Счётчики записей
    int total_salesmen = 0;
    int total_customers = 0;
    int total_orders = 0;

    // Загрузка данных из файлов при старте
    total_salesmen = load_salesmen(sales_people, "salesmen.txt");
    total_customers = load_customer(cus_people, "customers.txt");
    total_orders = load_orders(ord_things, "orders.txt");

    printf("\nДоступных продавцов: %d\n", total_salesmen);
    printf("Доступных покупателей: %d\n", total_customers);
    printf("Доступных заказов: %d\n", total_orders);

    int choice;

    do{
        show_menu();
        printf("Ваш выбор: ");

        // Чтение выбора и очистка буфера ввода
        if(scanf("%d", &choice) != 1){
            while(getchar() != '\n');
                choice = -1;  // нечисловой ввод -> неверный пункт
        }
        else{
            while (getchar() != '\n');
        }

        // Обработка пунктов меню
        switch(choice){
            case 1:
                select_all_salesmen(sales_people, total_salesmen);
                break;

            case 2:
                select_all_customers(cus_people, total_customers);
                break;

            case 3:
                select_all_orders(ord_things, total_orders);
                break;

			case 4:
                select_salesmen_reverse(sales_people, total_salesmen);
                break;

            case 0:
                printf("Выход из программы.\n");
                break;

            default:
                printf("Неверный пункт меню. Попробуйте снова.\n");
        }
        printf("\n");

    } while(choice != 0);

    return 0;
}