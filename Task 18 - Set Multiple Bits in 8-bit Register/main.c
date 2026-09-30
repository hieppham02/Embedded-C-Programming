#include <stdio.h>
#include <stdint.h>

uint8_t set_range(uint8_t reg, uint8_t start, uint8_t end) {
    return reg | ((0xFF >> (7 - end)) & (0xFF << start));
}

int main() {
    uint8_t reg, start, end;
    scanf("%hhu %hhu %hhu", &reg, &start, &end);
    printf("%u", set_range(reg, start, end));
    return 0;
}