#include <iostream>

int bit_operations(int num, int oper_type) {
    if (oper_type == 1) {
        // Set 1st bit
        num |= 1;
    } else if (oper_type == 2) {
        // Clear 31st bit
        num &= ~(1 << 31);
    } else if (oper_type == 3) {
        // Toggle 16th bit
        num ^= (1 << 15);
    }

    return num;
}

int main() {
    int num = 42;  // Example number
    int oper_type = 3;  // Example operation type

    int result = bit_operations(num, oper_type);
    std::cout << "Result: " << result << std::endl;

    return 0;
}