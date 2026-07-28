#include <stdio.h>
#include <stdint.h>

#define BIT(n)          (1 << (n))
#define SET_BIT(n)      (reg |= BIT(n))
#define CLEAR_BIT(n)    (reg &= ~BIT(n))
#define TOGGLE_BIT(n)   (reg ^= (BIT(n)))

uint8_t modify_register(uint8_t reg) {
    SET_BIT(2);
    SET_BIT(7);
    CLEAR_BIT(3);
    TOGGLE_BIT(5);
    return reg;
}

int main() {
    uint8_t reg;
    scanf("%hhu", &reg);
    printf("%u", modify_register(reg));
    return 0;
}