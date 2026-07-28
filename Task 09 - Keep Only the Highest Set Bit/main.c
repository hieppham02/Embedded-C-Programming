#include <stdio.h>
#include <stdint.h>

// Complete the function
uint16_t highest_set_bit(uint16_t reg) {
    if(reg == 0){
        return 0;
    }
    for(uint16_t i = 15; i >= 0; i --){
        if(reg & (1 << i)){
            return 1 << i;
        }
    }
    return 0;
}

int main() {
    uint16_t reg;
    scanf("%hu", &reg);

    uint16_t result = highest_set_bit(reg);
    printf("%hu", result);
    return 0;
}