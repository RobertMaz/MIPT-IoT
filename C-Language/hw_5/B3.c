/*
Сумма квадратов маленьких чисел
Ввести два целых числа a и b (a ≤ b) и вывести сумму квадратов всех чисел от a до b.

Input format
Два целых числа по модулю не больше 100
Output format
Сумма квадратов от первого введенного числа до второго
Examples
Input
4 10
Output
371
Input
1 5
Output
55
 */

#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    int result = 0;
    for (int i = a; i <= b; i++) {
        result += i * i;
    }
    printf("%d\n", result);
}
