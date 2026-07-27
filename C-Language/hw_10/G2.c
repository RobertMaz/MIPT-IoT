//
// Created by rmazitov on 7/27/26.
//
#include <stdio.h>

int main() {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");

    int n;
    fscanf(fin, "%d", &n);

    for (int i = 0; i < n / 2; i++) {
        fprintf(fout, "%c%c", 'A' + i, '2' + (i % 4) * 2);
    }

    fclose(fin);
    fclose(fout);

    return 0;
}
