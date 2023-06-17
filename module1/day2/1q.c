#include <stdio.h>
#include <stdint.h>

void printExponent(double x) {
    // Interpret the binary representation of the double as an unsigned 64-bit integer
    uint64_t bits = (uint64_t)&x;

    // Extract the exponent bits by masking and shifting
    uint16_t exponent = (bits >> 52) & 0x7FF;

    // Print the exponent in hexadecimal format
    printf("Exponent in hexadecimal: 0x%03X\n", exponent);

    // Print the exponent in binary format
    printf("Exponent in binary: 0b");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}