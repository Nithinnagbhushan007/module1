#include <stdio.h>

int countSetBits(unsigned int num) {
    int count = 0;
    
    while (num > 0) {
        if (num & 1) {
            count++;
        }
        num >>= 1;
    }
    
    return count;
}

int main() {
    unsigned int a[] = {0x1, 0xF4, 0x10001};
    int n = sizeof(a) / sizeof(a[0]);
    int totalBits = 0;
    
    for (int i = 0; i < n; i++) {
        totalBits += countSetBits(a[i]);
    }
    
    printf("Total number of set bits: %d\n", totalBits);
    
    return 0;
}