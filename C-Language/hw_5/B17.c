/*

Все счастливые числа
Ввести натурально число и напечатать все числа от 10 до введенного числа - у которых сумма цифр равна произведению цифр

Input format
Одно натуральное число большее 10
Output format
Числа у которых сумма цифр равна произведению цифр через пробел в порядке возрастания. Не превосходящие введенное число.
Examples
Input
200
Output
22 123 132
Input
1000
Output
22 123 132 213 231 312 321
Input
22
Output
22

 */

#include <stdio.h>


int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    int max = a > b ? a : b;
    int min = a <= b ? a : b;

    while (1) {
        int nod = max % min;
        if (nod == 0) {
            printf("%d", nod);
            break;
        }
        if (nod < min) {
            max = nod;
        } else {
            min = nod;
        }
    }
}
