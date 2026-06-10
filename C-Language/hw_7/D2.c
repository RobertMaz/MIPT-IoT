//
// Created by rmazitov on 6/9/26.
//

#include <stdio.h>

int rec(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return n+rec(n - 1);
}

int main () {
    int n;
    scanf("%d", &n);
    printf("%d", rec(n));
}