/*
Все цифры в порядке возрастания
Ввести целое число и определить, верно ли, что все его цифры расположены в порядке возрастания.

Input format
Целое число
Output format
YES или NO
Examples
Input
1238
Output
YES
Input
1274
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
        if (prev <= a % 10) {
            count++;
        }
        prev = a % 10;
        a /= 10;
    }
    printf(count > 1 ? "NO" : "YES");
}
