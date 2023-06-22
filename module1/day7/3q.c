#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

struct LogEntry {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char time[9];
};

void extractData(FILE *file, struct LogEntry entries[], int *numEntries) {
    char line[100];
    char *token;
    int entryCount = 0;

    while (fgets(line, sizeof(line), file) != NULL) {
        if (entryCount >= MAX_ENTRIES) {
            printf("Maximum number of entries exceeded. Skipping remaining lines.\n");
            break;
        }

        token = strtok(line, ",");
        entries[entryCount].entryNo = atoi(token);

        token = strtok(NULL, ",");
        strcpy(entries[entryCount].sensorNo, token);

        token = strtok(NULL, ",");
        entries[entryCount].temperature = atof(token);

        token = strtok(NULL, ",");
        entries[entryCount].humidity = atoi(token);

        token = strtok(NULL, ",");
        entries[entryCount].light = atoi(token);

        token = strtok(NULL, ",");
        strcpy(entries[entryCount].time, token);

        entryCount++;
    }

    *numEntries = entryCount;
}

void displayData(struct LogEntry entries[], int numEntries) {
    printf("%-8s %-10s %-12s %-8s %-6s\n", "EntryNo", "SensorNo", "Temperature", "Humidity", "Light");
    printf("--------------------------------------------\n");

    for (int i = 0; i < numEntries; i++) {
        printf("%-8d %-10s %-12.2f %-8d %-6d\n",
            entries[i].entryNo,
            entries[i].sensorNo,
            entries[i].temperature,
            entries[i].humidity,
            entries[i].light);
    }
}

int main() {
    struct LogEntry entries[MAX_ENTRIES];
    int numEntries = 0;

    FILE *file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Error opening file. Check if the file exists and you have sufficient permissions.\n");
        return 1;
    }

    extractData(file, entries, &numEntries);
    fclose(file);

    displayData(entries, numEntries);

    return 0;
}