#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void searchStudentByName(const struct Student* students, int size, const char* searchName) {
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("Student found!\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            printf("\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student not found!\n");
    }
}

int main() {
    int size = 5;

    struct Student students[] = {
        {1001, "Kshithij", 80.50},
        {1002, "Harsha", 95.25},
        {1003, "Nithin", 70.75},
        {1004, "Madan", 85.00},
        {1005, "Bhushan", 90.80}
    };

    char searchName[20];
    printf("Enter the name to search: ");
    scanf("%s", searchName);

    searchStudentByName(students, size, searchName);

    return 0;
}