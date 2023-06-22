#include <stdio.h>

int calculateSumOfEvenElements(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int calculateSumOfOddElements(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int array[] = {21, 17, 90, 55, 21};
    int size = sizeof(array) / sizeof(array[0]);

    int sumOfEvenElements = calculateSumOfEvenElements(array, size);
    int sumOfOddElements = calculateSumOfOddElements(array, size);

    printf("Sum of even elements: %d\n", sumOfEvenElements);
    printf("Sum of odd elements: %d\n", sumOfOddElements);
    
    int difference = sumOfEvenElements - sumOfOddElements;
    printf("Difference between even and odd elements: %d\n", difference);

    return 0;
}