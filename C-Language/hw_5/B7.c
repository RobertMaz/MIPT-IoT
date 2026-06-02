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

int main() {
    int a;
    scanf("%d", &a);
    int prev = 0;
    int count = 0;

    while (a > 0) {
        if (prev == a % 10) {
            count++;
        }
        prev = a % 10;
        a /= 10;
    }
    printf(count > 0 ? "YES" : "NO");
}
