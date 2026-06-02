/*
Ровно три цифры
Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.

Input format
Целое положительное число
Output format
Одно слов: YES или NO
 */

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    if (a / 100 >= 1 && a / 1000 <= 0) {
        printf("YES");
    } else {
        printf("NO");
    }
}
