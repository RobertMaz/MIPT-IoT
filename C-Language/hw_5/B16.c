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
    int a,b;
    scanf("%d %d", &a, &b);
    int max = a > b ? a : b;
    int min = a <= b ? a : b;

    while (1) {
        int nod = max % min;
        if (nod == 0) {
            printf("%d", nod);
            break;
        }
        if (nod < min) {
            max = nod;
        } else {
            min = nod;
        }
    }
}
