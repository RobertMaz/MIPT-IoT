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

        char last = str[len - 1];
        int first = 1;
        for (size_t i = 0; i + 1 < len; i++) {
            if (str[i] == last) {
                if (!first) {
                    fprintf(fout, " ");
                }
                fprintf(fout, "%zu", i);
                first = 0;
            }
        }
    }

    fclose(fin);
    fclose(fout);

    return 0;
}
