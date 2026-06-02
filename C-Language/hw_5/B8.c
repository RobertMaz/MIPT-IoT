/*
Ровно одна цифра 9
Ввести целое число и определить, верно ли, что в нём ровно одна цифра «9».

Input format
Одно целое число
Output format
Ответ: YES или NO
Examples
Input
193
Output
YES
Input
1994
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
        if (prev == 9) {
            count++;
        }
    }
    printf(count == 1 ? "YES" : "NO");
}
