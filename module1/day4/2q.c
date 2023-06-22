#include <stdio.h>

void findMinMax(int arr[], int size, int *min, int *max) {
    *min = arr[0]; // Initialize min to the first element
    *max = arr[0]; // Initialize max to the first element

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i]; // Update min if a smaller element is found
        }

        if (arr[i] > *max) {
            *max = arr[i]; // Update max if a larger element is found
        }
    }
}

int main() {
    int array[] = {52, 64, 84, 20, 36, 12, 90, 72, 10, 45, 56};
    int size = sizeof(array) / sizeof(array[0]);
    int min, max;

    findMinMax(array, size, &min, &max);

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}