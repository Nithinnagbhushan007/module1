#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void sortStudentArray(struct Student* students, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                // Swap the elements
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void displayStudentArray(const struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
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

    printf("Before sorting:\n");
    displayStudentArray(students, size);

    sortStudentArray(students, size);

    printf("After sorting:\n");
    displayStudentArray(students, size);

    return 0;
}