#include <stdio.h>
#include <stdint.h>

#define SET_ENABLE(x)       ((x & 0x01) << 0)
#define SET_MODE(x)         ((x & 0x03) << 1)
#define SET_SPEED(x)        ((x & 0x07) << 3) 

uint16_t build_register(uint8_t enable, uint8_t mode, uint8_t speed) {
    return SET_ENABLE(enable) | SET_MODE(mode) | SET_SPEED(speed);
}

int main() {
    uint8_t enable, mode, speed;
    scanf("%hhu %hhu %hhu", &enable, &mode, &speed);

    uint16_t reg = build_register(enable, mode, speed);
    printf("%u", reg);
    return 0;
}