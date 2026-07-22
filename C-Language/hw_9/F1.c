//
// Created by rmazitov on 13.07.2026.
//

#include <stdio.h>

void sort_array(int size, int a[]) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// int main() {
//     int a[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
//     printf("Before sorting: ");
//     for (int i = 0; i < 10; i++) {
//         printf("%d ", a[i]);
//     }
//     sort_array(10, a);
//     printf("\nAfter sorting: ");
//     for (int i = 0; i < 10; i++) {
//         printf("%d ", a[i]);
//     }
// }


