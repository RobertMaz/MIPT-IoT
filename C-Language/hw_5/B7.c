/*
Две одинаковые цифры
Ввести целое число и определить, верно ли, что в его записи есть   две одинаковые цифры, НЕ обязательно стоящие рядом.

Input format
Одно целое число
Output format
Одно слово: YES или NO
Examples
Input
1234
Output
NO
Input
1242
Output
YES
 */

#include <stdio.h>

int checkNum(int num, int init) {
    int count = 0;
    while (init > 0) {
        if (init % 10 == num) {
            count++;
        }
        init /= 10;
    }
    return count;
}

int main() {
    int a, count = 0;
    scanf("%d", &a);
    while (a > 0) {
        int num = a % 10;
        count += checkNum(num, a) > 1 ? 1 : 0;
        a /= 10;
    }
    printf(count > 0 ? "YES" : "NO");
}