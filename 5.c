#include <stdio.h>

int main() {
    // создаем переменные n (текущее число последовательности), cnt (количество чисел) и summ (сумма всех чисел)
    float n, cnt = 0, summ = 0;
    // вводится n
    scanf("%f", &n);
    // создаем цикл
    // пока n не равно нулю (т.к. при появлении 0 цикл завершится)
    while (n != 0) {
        // к количеству добавляем 1, а к сумме текущее число n
        cnt++;
        summ += n;
        // вводим новое n
        scanf("%f", &n);
    }
    // выводим среднее арифметическое (сумма деленная на количество чисел)
    printf("%f", summ / cnt);
    return 0;
}