#include <stdio.h>

int main() {
    // создаем переменные: n (количество элементов массива), count (количество положительных элементов) и elem (сами элементы)
    int n, count = 0, elem;
    // ввод n
    scanf("%i", &n);
    // создаем цикл для ввода n чисел массива
    for (int i=0; i<n; i++) {
        // ввод текущего elem
        scanf("%i", &elem);
        // если текущий элемент больше нуля (т.е. положительное), то к count прибавляем 1
        if (elem > 0) {
            count++;
        }
    }
    // выводим count
    printf("%i", count);
    return 0;
}