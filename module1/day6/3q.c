#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

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
    int size = 3;

    struct Student students[] = {
        {1001, "Puneeth", 100.00},
        {1002, "Vijay", 95.50},
        {1003, "Prajwal", 80.75}
    };

    displayStudentArray(students, size);

    return 0;
}