/*
Сумма цифр
Ввести целое число и найти сумму его цифр.

Input format
Одно целое число большее или равное нулю.
Output format
Одно число - сумма цифр
Examples
Input
1234
Output
10
Input
111
Output
3
 */

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int res = 0;

    while (a > 0) {
        res += a % 10;
        a /= 10;
    }
    printf("%d", res);
}
