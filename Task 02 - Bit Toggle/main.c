#include <stdio.h>

int toggleFifthBit(int n) {
    return n ^ (1 << 5);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", toggleFifthBit(n));
    return 0;
}