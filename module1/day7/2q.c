#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void convertToUpperCase(char* str) {
    while (*str) {
        *str = toupper((unsigned char)*str);
        str++;
    }
}

void convertToLowerCase(char* str) {
    while (*str) {
        *str = tolower((unsigned char)*str);
        str++;
    }
}

void convertToSentenceCase(char* str) {
    int capitalize = 1;
    while (*str) {
        if (isspace((unsigned char)*str)) {
            capitalize = 1;
        } else if (capitalize) {
            *str = toupper((unsigned char)*str);
            capitalize = 0;
        } else {
            *str = tolower((unsigned char)*str);
        }
        str++;
    }
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Insufficient arguments. Usage: ./cp [option] source_file destination_file\n");
        return 1;
    }

    char *option = argv[1];
    char *sourcePath = argv[2];
    char *destinationPath = argv[3];

    FILE *sourceFile = fopen(sourcePath, "r");
    FILE *destinationFile = fopen(destinationPath, "w");

    if (sourceFile == NULL || destinationFile == NULL) {
        printf("Error opening file. Check if the file exists and you have sufficient permissions.\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        if (strcmp(option, "-u") == 0) {
            ch = toupper((unsigned char)ch);
        } else if (strcmp(option, "-l") == 0) {
            ch = tolower((unsigned char)ch);
        } else if (strcmp(option, "-s") == 0) {
            ch = tolower((unsigned char)ch);
        }
        fputc(ch, destinationFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}