#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    int hour;
    printf("Введите время (часы от 0 до 23): ");
    scanf("%d", &hour);
    switch (hour) {
    case 0: case 1: case 2: case 3: case 4: case 23:
        printf("Спокойной ночи!\n");
        break;
    case 5: case 6: case 7: case 8: case 9: case 10: case 11:
        printf("Доброе утро!\n");
        break;
    case 12: case 13: case 14: case 15: case 16: case 17:
        printf("Добрый день!\n");
        break;
    case 18: case 19: case 20: case 21: case 22:
        printf("Добрый вечер!\n");
        break;
    default:
        printf("Ошибка! Введите число от 0 до 23.\n");
        break;
    }
    return 0;
}