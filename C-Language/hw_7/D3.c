//
// Created by rmazitov on 6/9/26.
//

#include <stdio.h>

void rec(int n) {
    // 54321
    int current = n % 10;
    printf("%d ", current);
    if (n /10 > 0) {
        rec(n / 10);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    rec(n);
}
