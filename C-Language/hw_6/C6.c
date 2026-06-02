/*
Сумма от 1 до N
Составить функцию, которая определяет сумму всех чисел от 1 до N и привести пример ее использования.

Input format
Одно целое положительное число N
Output format
Целое число - сумма чисел от 1 до N
Examples
Input
100
Output
5050
 */

#include <stdio.h>

unsigned long long int  f(int x);

int main() {
    int a = -1;
    scanf("%d", &a);
    printf("%llu ", f(a));
}

unsigned long long int f(int x) {
    if (x == 1) {
        return 1;
    }
    unsigned long long int num = 2;
    for (int i = 1; i < x - 1; i++) {
        num *= 2;
    }
    return num;
}
