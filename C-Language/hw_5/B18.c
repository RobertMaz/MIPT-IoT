/*

Числа Фибоначчи
Вывести на экран ряд чисел Фибоначчи, состоящий из n элементов.
Числа Фибоначчи – это элементы числовой последовательности 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, …, в которой каждое последующее число равно сумме двух предыдущих.

Input format
Одно натуральное число
Output format
Ряд чисел Фибоначчи через пробел
Examples
Input
5
Output
1 1 2 3 5
Input
10
Output
1 1 2 3 5 8 13 21 34 55

 */

#include <stdio.h>


int main() {
    int a, prev= 1, prevPrev= 0;
    scanf("%d", &a);
    printf("1 ");
    for (int i = 1; i < a; i++) {
        int current = prev + prevPrev;
        prevPrev = prev;
        prev = current;
        printf("%d ", current);
    }
}
