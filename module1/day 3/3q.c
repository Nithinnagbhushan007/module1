#include <stdio.h>

int findLargestNumber(int num);

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    
    int largestNumber = findLargestNumber(num);
    
    printf("The largest number after deleting a digit: %d\n", largestNumber);
    
    return 0;
}

int findLargestNumber(int num) {
    int largest = 0;
    
    int temp = num;
    int divisor = 1;
    
    while (temp > 0) {
        temp /= 10;
        
        int currentNumber = (num / (divisor * 10)) * divisor + (num % divisor);
        
        if (currentNumber > largest) {
            largest = currentNumber;
        }
        
        divisor *= 10;
    }
    
    return largest;
}