#include <stdio.h>

int find_biggest(int a, int b) {
    int biggest = (a > b) ? a : b;
    return biggest;
}

int main() {
    int result = find_biggest(5, 10);
    printf("%d\n", result);  // Output: 10

    result = find_biggest(8, 4);
    printf("%d\n", result);  // Output: 8

    return 0;
}