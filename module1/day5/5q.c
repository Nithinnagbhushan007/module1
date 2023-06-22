#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

void swapStructFields(struct Person* p1, struct Person* p2) {
    char tempName[50];
    strcpy(tempName, p1->name);
    strcpy(p1->name, p2->name);
    strcpy(p2->name, tempName);

    int tempAge = p1->age;
    p1->age = p2->age;
    p2->age = tempAge;
}

int main() {
    struct Person person1, person2;

    printf("Enter name for person1: ");
    scanf("%s", person1.name);
    printf("Enter age for person1: ");
    scanf("%d", &person1.age);

    printf("Enter name for person2: ");
    scanf("%s", person2.name);
    printf("Enter age for person2: ");
    scanf("%d", &person2.age);

    printf("\nBefore swapping:\n");
    printf("Person1 - Name: %s, Age: %d\n", person1.name, person1.age);
    printf("Person2 - Name: %s, Age: %d\n", person2.name, person2.age);

    swapStructFields(&person1, &person2);

    printf("\nAfter swapping:\n");
    printf("Person1 - Name: %s, Age: %d\n", person1.name, person1.age);
    printf("Person2 - Name: %s, Age: %d\n", person2.name, person2.age);

    return 0;
}