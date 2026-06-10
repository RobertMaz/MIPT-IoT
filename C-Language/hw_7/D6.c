//
// Created by rmazitov on 6/9/26.
//

#include <stdio.h>

void rec() {
    int c = getchar();
    if (c == '.') {
        return;
    }
    rec();
    printf("%c", c);
}

int main() {
    rec();
}
