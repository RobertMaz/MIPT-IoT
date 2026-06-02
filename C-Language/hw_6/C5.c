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

int f(int x);

int main() {
    int a = -1;
    scanf("%d", &a);
    printf("%d ", f(a));
}

int f(int x) {
    int num = 0;
    for (int i = 0; i <= x; i++) {
        num += i;
    }
    return num;
}
