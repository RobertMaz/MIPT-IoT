//
// Created by rmazitov on 6/17/26.
//

#include <stdio.h>

int main() {
    int array[5] ={};
    int min = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
        if (i == 0) {
            min = array[i];
            continue;
        }
        if (min > array[i]) {
            min = array[i];
        }
    }
    printf("%d", min);
}