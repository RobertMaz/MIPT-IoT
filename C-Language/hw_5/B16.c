/*
Наибольший общий делитель
Составить программу для вычисления НОД с помощью алгоритма Евклида. Даны два натуральных числа. Найти наибольший общий делитель.

Input format
Два неотрицательных целых числа
Output format
Одно целое число наибольший общий делитель
Examples
Input
14 21
Output
7
Input
27 18
Output
9
 */

#include <stdio.h>


int main() {
    int x,y;
    scanf("%d %d", &x, &y);
    while (y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }
    printf("%d", x);
}
