#include <stdio.h>
#include <stdint.h>

uint16_t spread_bits(uint8_t val) {
    uint16_t res = val;
    res = (res | (res << 4)) & 0x0F0F;
    res = (res | (res << 2)) & 0x3333;
    res = (res | (res << 1)) & 0x5555;
    return res;
}

int main() {
    uint8_t val;
    scanf("%hhu", &val);

    uint16_t result = spread_bits(val);
    printf("%u", result);
    return 0;
}