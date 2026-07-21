#include <stdio.h>
#include <stdint.h>

uint8_t clear_bit(uint8_t reg, uint8_t pos) {
    return reg ^ 1 << pos;
}

int main() {
    uint8_t reg, pos;
    scanf("%hhu %hhu", &reg, &pos);
    uint8_t result = clear_bit(reg, pos);
    printf("%u", result);
    return 0;
}

// recomend to use gcc compiler