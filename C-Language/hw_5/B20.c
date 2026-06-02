/*
Проверка на простоту
Проверить число на простоту.

Input format
Натуральное число
Output format
Если число является простым напечатать YES, иначе NO
Examples
Input
10
Output
NO
Input
7
Output
YES
 */

#include <stdio.h>


int main() {
    int a, counter= 0 ;
    scanf("%d", &a);


    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            counter++;
        }
    }
    printf(counter == 0 && a != 1 ? "YES" : "NO");
}
