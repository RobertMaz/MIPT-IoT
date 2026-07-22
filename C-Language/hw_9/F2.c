//
// Created by rmazitov on 7/22/26.
//

#include <stdio.h>

void sort_even_odd(int n, int a[]) {
    int b[n];
    int p = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            b[p++] = a[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            b[p++] = a[i];
        }
    }
    for (int i = 0; i < n; i++) {
        a[i] = b[i];
    }
}

// int main() {
//     int a[20] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
//     printf("Before sorting: ");
//     for (int i = 0; i < 20; i++) {
//         printf("%d ", a[i]);
//     }
//     sort_even_odd(20, a);
//     printf("\nAfter sorting: ");
//     for (int i = 0; i < 20; i++) {
//         printf("%d ", a[i]);
//     }
// }