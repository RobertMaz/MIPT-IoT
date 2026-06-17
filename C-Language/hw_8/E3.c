//
// Created by rmazitov on 6/17/26.
//

#include <stdio.h>

int main() {
    int array[10] ={};
    int min = 0, max = 0, maxn = 0, minn = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
        if (i == 0) {
            min = array[i];
            max = array[i];
            continue;
        }
        if (min > array[i]) {
            min = array[i];
            minn = i;
        }
        if (max < array[i]) {
            max = array[i];
            maxn = i;
        }
    }
    printf("%d %d %d %d", ++maxn, max, ++minn, min);
}