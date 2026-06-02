/*
Перевернуть число
Ввести целое число и «перевернуть» его, так чтобы первая цифра стала последней и т.д.

Input format
Целое неотрицательное число
Output format
Целое не отрицательное число наоборот
Examples
Input
1234
Output
4321
Input
782
Output
287
 */

#include <stdio.h>


int main() {
    int a;
    scanf("%d", &a);

    do {
        printf("%d", a % 10);
        a /= 10;
    } while (a > 0);
}
