#include <stdio.h>

void swap(void* a, void* b, size_t size) {
    char* p1 = (char*)a;
    char* p2 = (char*)b;

    while (size--) {
        char temp = *p1;
        *p1++ = *p2;
        *p2++ = temp;
    }
}

int main() {
    int x = 10;
    int y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y, sizeof(int));
    printf("After swap: x = %d, y = %d\n", x, y);

    double a = 3.14;
    double b = 2.71;

    printf("Before swap: a = %lf, b = %lf\n", a, b);
    swap(&a, &b, sizeof(double));
    printf("After swap: a = %lf, b = %lf\n", a, b);

    char c1 = 'A';
    char c2 = 'B';

    printf("Before swap: c1 = %c, c2 = %c\n", c1, c2);
    swap(&c1, &c2, sizeof(char));
    printf("After swap: c1 = %c, c2 = %c\n", c1, c2);

    return 0;
}