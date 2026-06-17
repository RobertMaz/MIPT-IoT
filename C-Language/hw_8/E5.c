//
// Created by rmazitov on 6/17/26.
//

#include <stdio.h>

int main() {
    int array[10] ={};
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
        if (array[i] > 0) sum += array[i];
    }
    printf("%d", sum);
}