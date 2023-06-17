#include <stdio.h>

void patternOne(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
    for (i = n - 1; i >= 1; i--) {
        printf("%d", i);
    }
}

void spacePattern(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf(" ");
    }
}

void patternTwo(int n) {
    int i;
    for (i = n; i >= 1; i--) {
        printf("%d", i);
    }
    for (i = 2; i <= n; i++) {
        printf("%d", i);
    }
}

void patternOut(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        patternOne
    (i);
        if (i != n) {
            spacePattern(n - i);
        }
    }
    for (i = n - 1; i >= 1; i--) {
        spacePattern(n - i);
        patternTwo(i);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    patternOut(n);

    return 0;
}