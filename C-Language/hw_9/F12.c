//
// Created by rmazitov on 7/22/26.
//

#include <stdio.h>

void change_max_min(int size, int a[]) {
    int max = a[0], maxP = 0, min = a[0], minP = 0;
    for (int i = 1; i < size; i++) {
        if (a[i] > max) {
            max = a[i];
            maxP = i;
        }
        if (a[i] < min) {
            min = a[i];
            minP = i;
        }
    }
    int temp = max;
    a[maxP] = min;
    a[minP] = temp;
}


