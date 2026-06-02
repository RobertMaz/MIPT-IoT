/*
Модуль числа
Составить функцию, модуль числа и привести пример ее использования.

Input format
Целое число
Output format
Целое не отрицательное число
Examples
Input
-100
Output
100
 */

#include <stdio.h>

int mod(int base) {
 return base < 0 ? -base : base;
}

int main() {
 int a;
 scanf("%d", &a);
 printf("%d", mod(a));
}