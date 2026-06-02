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
    int aa;
    scanf("%d", &aa);
    for (int i = 10; i <= aa; i++) {
        int a = i;
        int sum = 0;
        int proizv = 1;
        while (a > 0) {
            sum+=a%10;
            proizv *= a % 10;
            a /= 10;
        }
        if (sum == proizv) printf("%d ", i);
    }
}
