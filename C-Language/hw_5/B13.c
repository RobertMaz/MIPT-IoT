/*
Количество четных и нечетных цифр
Посчитать количество четных и нечетных цифр числа.

Input format
Одно целое неотрицательное число.
Output format
Два числа через пробел. Количество четных и нечетных цифр в числе.
Examples
Input
1234
Output
2 2
Input
787
Output
1 2
 */

#include <stdio.h>


int main() {
    int a, counterEven = 0, counterOdd = 0;
    scanf("%d", &a);

    while (a > 0) {
        if (a % 10 % 2 == 0) {
            counterEven++;
        } else {
            counterOdd++;
        }
        a /= 10;
    }
    printf("%d %d", counterEven, counterOdd);
}
