#include <stdio.h>
#include <ctype.h>

void toggleCase(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
        i++;
    }
}

int main() {
    char str1[] = "Hello World";
    char str2[] = "Prog4u";

    printf("Input String: %s\n", str1);
    toggleCase(str1);
    printf("Output String: %s\n", str1);

    printf("Input String: %s\n", str2);
    toggleCase(str2);
    printf("Output String: %s\n", str2);

    return 0;
}