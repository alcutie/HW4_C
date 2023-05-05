#include <stdio.h>
#include <string.h>

// создаем функцию goodPassword для проверки пароля
int goodPassword(char password[]) {
    // если длина пароля меньше 8 или больше 15, то возвращаем 0
    if (strlen(password) < 8 || strlen(password) > 15) {
        return 0;
    }
    // создаем переменные: большие буквы (big), маленькие буквы (small), цифры (number) и другие (other)
    int big = 0, small = 0, number = 0, other = 0;
    // создаем цикл для проверки всех символов пароля
    for (int i=0; i<strlen(password) - 1; i++) {
        // если код символа меньше 33 или больше 126, то возвращаем 0
        if (password[i] < 33 || password[i] > 126) {
            return 0;
        }
        // если символ от A до Z - большая буква, то переменная big = 1 (при второй встрече тоже будет = 1)
        if ('A' <= password[i] && password[i] <= 'Z') {
            big = 1;
        }
        // если символ от a до z - маленькая буква, то переменная small = 1
        else if ('a' <= password[i] && password[i] <= 'z') {
            small = 1;
        }
        // если символ от 0 до 9 - цифра, то переменная number = 1
        else if ('0' <= password[i] && password[i] <= '9') {
            number = 1;
        }
        // иначе - другой символ, переменная other = 1
        else {
            other = 1;
        }
    }
    // если среди переменных минимум три = 1, то пароль подходит, возвращаем 1
    if (big + small + number + other >= 3) {
        return 1;
    }
    // иначе пароль не подходит - возвращаем 0
    else {
        return 0;
    }
}

int main() {
    // создаем переменную-строку для пароля
    char password[16];
    // вводим строку с ограничением на 16 символов (14 на пароль и 2 в запас)
    // если введётся больше 16 символов - строка обрежется
    fgets(password, 16, stdin);
    // если функция вернула 1, то условие верно, выводим YES
    if (goodPassword(password)) {
        printf("YES");
    }
    // иначе NO
    else {
        printf("NO");
    }
    return 0;
}
