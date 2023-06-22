#include <stdio.h>

void calculateSumAndAverage(int arr[], int size, int *sum, float *average) {
    *sum = 0;
    for (int i = 0; i < size; i++) {
        *sum += arr[i];
    }
    *average = (float)(*sum) / size;
}

int main() {
    int array[] = {12, 51, 96, 72, 10, 12, 20, 116, 399, 489};
    int size = sizeof(array) / sizeof(array[0]);
    int sum;
    float average;

    calculateSumAndAverage(array, size, &sum, &average);

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}