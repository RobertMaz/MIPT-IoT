//
// Created by rmazitov on 6/17/26.
//

#include <stdio.h>

int main() {
    int array[5] ={};
    double sum = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }
    printf("%.3f", sum/5);
}