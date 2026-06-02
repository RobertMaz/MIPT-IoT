/*
Возвести в степень
Составить функцию, возведение числа N в степень P. int power(n, p) и привести пример ее использования.

Input format
Два целых числа: N по модулю не превосходящих 1000 и P ≥ 0
Output format
Одно целое число
Examples
Input
8 3
Output
512
Input
-5 2
Output
25
 */

#include <stdio.h>

int power(int, int);

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", power(a, b));
}

int power(int a, int b) {
    int num = a;
    if (b == 0 ) {
        return 1;
    }
    for (int i = 1; i < b; i++) {
        num *= a;
    }
    return num;
}
