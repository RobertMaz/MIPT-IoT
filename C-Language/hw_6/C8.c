/*
Большими буквами
Составить функцию, которая переводит латинскую строчную букву в заглавную. И показать пример ее использования.

Input format
Строка состоящая из английских букв, пробелов и запятых. В конце строки символ точка.
Output format
Исходная строка в которой маленькие английские буквы заменены заглавными.
Examples
Input
hello World!.
Output
HELLO WORLD!
Input
abc, def.
Output
ABC, DEF
 */

#include <stdio.h>

int main() {
    int c;
    while ((c = getchar()) != '.') {
        if (c > 96 && c < 123) {
            printf("%c", c - 32);
        } else {
            printf("%c", c);
        }
    }
}
