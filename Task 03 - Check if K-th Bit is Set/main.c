#include <stdio.h>

int isKthBitSet(int n, int k) {
    if (n & 1 << k){
        return 1;
    }
    return 0;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", isKthBitSet(n, k));
    return 0;
}