//
// Created by rmazitov on 7/27/26.
//
#include <stdio.h>

int main() {
    FILE *fin = fopen("input.txt", "r");
    FILE *fout = fopen("output.txt", "w");

    char w1[150], w2[150];
    int cnt1[26] = {0}, cnt2[26] = {0};

    fscanf(fin, "%s %s", w1, w2);

    for (int i = 0; w1[i]; i++) {
        cnt1[w1[i] - 'a']++;
    }
    for (int i = 0; w2[i]; i++) {
        cnt2[w2[i] - 'a']++;
    }

    int first = 1;
    for (int c = 0; c < 26; c++) {
        if (cnt1[c] == 1 && cnt2[c] == 1) {
            if (!first) {
                fprintf(fout, " ");
            }
            fprintf(fout, "%c", 'a' + c);
            first = 0;
        }
    }

    fclose(fin);
    fclose(fout);

    return 0;
}
