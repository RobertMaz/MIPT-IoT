//
// Created by rmazitov on 6/17/26.
//

#include <stdio.h>

int main() {
    int array[12] ={};
    double sum = 0;
    for (int i = 0; i < 12; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }
    printf("%.2f", sum/12);
}