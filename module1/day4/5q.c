#include <stdio.h>

int calculateSumOfEvenIndexedElements(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i += 2) {
        sum += arr[i];
    }
    return sum;
}

int calculateSumOfOddIndexedElements(int arr[], int size) {
    int sum = 0;
    for (int i = 1; i < size; i += 2) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int array[] = {21, 360, 17, 72, 90, 55, 55, 21, 36};
    int size = sizeof(array) / sizeof(array[0]);

    int sumOfEvenIndexedElements = calculateSumOfEvenIndexedElements(array, size);
    int sumOfOddIndexedElements = calculateSumOfOddIndexedElements(array, size);

    printf("Sum of even indexed elements: %d\n", sumOfEvenIndexedElements);
    printf("Sum of odd indexed elements: %d\n", sumOfOddIndexedElements);
    
    int difference = sumOfEvenIndexedElements - sumOfOddIndexedElements;
    printf("Difference between even and odd indexed elements: %d\n", difference);

    return 0;
}