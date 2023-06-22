#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculateTotalSeconds(char str[]) {
    char* token;
    const char* delimiters = ":";
    int hours, minutes, seconds, totalSeconds;

    token = strtok(str, delimiters);
    hours = atoi(token);

    token = strtok(NULL, delimiters);
    minutes = atoi(token);

    token = strtok(NULL, delimiters);
    seconds = atoi(token);

    totalSeconds = hours * 3600 + minutes * 60 + seconds;
    return totalSeconds;
}

int main() {
    char str1[] = "10:12:50";
    char str2[] = "13:10:40";

    int totalSeconds1 = calculateTotalSeconds(str1);
    int totalSeconds2 = calculateTotalSeconds(str2);

    printf("Input String: %s\n", str1);
    printf("Total Seconds: %d\n", totalSeconds1);

    printf("Input String: %s\n", str2);
    printf("Total Seconds: %d\n", totalSeconds2);

    return 0;
}