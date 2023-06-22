#include <stdio.h>
#include <stdlib.h>

int convertStringToInt(char str[]) {
    return atoi(str);
}

int main() {
    char str1[] = "0";
    char str2[] = "0105";
    char str3[] = "52710";

    int value1 = convertStringToInt(str1);
    int value2 = convertStringToInt(str2);
    int value3 = convertStringToInt(str3);

    printf("Input String: %s\n", str1);
    printf("Int Value: %d\n", value1);

    printf("Input String: %s\n", str2);
    printf("Int Value: %d\n", value2);

    printf("Input String: %s\n", str3);
    printf("Int Value: %d\n", value3);

    return 0;
}