/*
Все цифры четные
Ввести целое число и определить, верно ли, что все его цифры четные.

Input format
Одно целое число
Output format
YES или NO
Examples
Input
2684
Output
YES
Input
2994
Output
NO
 */

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int prev = 0;
    int count = 0;

    while (a > 0) {
        prev = a % 10;
        a /= 10;
        //
        if (prev % 2 != 0) {
            count++;
        }
    }
    printf(count == 0 ? "YES" : "NO");
}
