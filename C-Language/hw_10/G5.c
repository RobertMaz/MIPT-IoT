//
// Created by rmazitov on 7/27/26.
//
#include <stdio.h>
#include <string.h>

int main() {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");

    char str[1050];

    if (fgets(str, sizeof(str), fin) != NULL) {
        size_t len = strlen(str);
        while (len > 0 && (str[len - 1] == '\n' || str[len - 1] == '\r')) {
            str[len - 1] = '\0';
            len--;
        }

        for (size_t i = 0; i < len; i++) {
            if (str[i] == 'a') {
                str[i] = 'b';
            } else if (str[i] == 'b') {
                str[i] = 'a';
            } else if (str[i] == 'A') {
                str[i] = 'B';
            } else if (str[i] == 'B') {
                str[i] = 'A';
            }
        }

        fprintf(fout, "%s", str);
    }

    fclose(fin);
    fclose(fout);

    return 0;
}
