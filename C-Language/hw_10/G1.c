//
// Created by rmazitov on 7/27/26.
//
#include <stdio.h>

int main() {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");

    char str[150];

    if (fgets(str, sizeof(str), fin) != NULL) {
        size_t len = strlen(str);
        while (len > 0 && (str[len - 1] == '\n' || str[len - 1] == '\r')) {
            str[len - 1] = '\0';
            len--;
        }

        fprintf(fout, "%s, %s, %s %zu", str, str, str, len);
    }

    fclose(fin);
    fclose(fout);

    return 0;
}