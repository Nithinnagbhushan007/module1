#include <stdio.h>
#include <limits.h>

void findMinMaxDigits(int n, int nums[]) {
    int i;
    int smallest = INT_MAX;
    int largest = INT_MIN;
    
    for (i = 0; i < n; i++) {
        int num = nums[i];
        
        while (num != 0) {
            int digit = num % 10;
            
            if (digit < smallest) {
                smallest = digit;
            }
            
            if (digit > largest) {
                largest = digit;
            }
            
            num /= 10;
        }
    }
    
    if (smallest == INT_MAX || largest == INT_MIN) {
        printf("Not Valid\n");
    } else {
        printf("Smallest digit: %d\n", smallest);
        printf("Largest digit: %d\n", largest);
    }
}

int main() {
    int n;
    printf("Enter the number of values: ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Not Valid\n");
        return 0;
    }
    
    int nums[n];
    int i;
    
    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    findMinMaxDigits(n, nums);
    
    return 0;
}