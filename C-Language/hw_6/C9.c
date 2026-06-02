/*
Факториал
Составить функцию вычисления N!. Использовать ее при вычислении факториала int factorial(int n)

Input format
Целое положительное число не больше 20
Output format
Целое положительное число
Examples
Input
5
Output
120
 */

#include <stdio.h>
int factorial(int n);


int main() {
    int c;
    scanf("%d", &c);
    printf("%d", factorial(c));
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return factorial(n - 1) * n;
}