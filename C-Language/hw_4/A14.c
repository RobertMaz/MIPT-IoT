#include <stdio.h>

int main() {
    int input, a, b, c;
    scanf("%d", &input);
    a = (input / 100);
    b = (input / 10 % 10);
    c = (input % 10);

    if (a >= b && a >= c) {
        printf("%d", a);
    } else if (b >= a && b >= c) {
        printf("%d", b);
    } else {
        printf("%d", c);
    }
}
