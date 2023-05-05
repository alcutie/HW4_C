#include <stdio.h>

int main() {
    // создаем переменные num (номер месяца) и year (год)
    int num, year;
    // эти две переменные вводятся
    scanf("%i %i", &num, &year);
    // т.к. февраль может иметь 29 или 28 дней, ставим условие:
    // если год високосный и число месяца 2 (февраль), то пишем 29 дней
    if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && num == 2) {
        printf("29");
    }
    // если же месяцы апрель, июнь, сентябрь и ноябрь, то 30 дней
    else if (num == 4 || num == 6 || num == 9 || num == 11) {
        printf("30");
    }
    // а если январь, март, май, июль, август, октябрь и декабрь, то 31 день
    else if (num == 1 || num == 3 || num == 5 || num == 7 || num == 8 || num == 10 || num == 12) {
        printf("31");
    }
    // иначе выводим 28 дней (февраль, не високосный)
    else {
        printf("28");
    }
    return 0;
}