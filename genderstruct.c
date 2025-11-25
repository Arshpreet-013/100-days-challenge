//Define a struct with enum Gender and print person's gender.
#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;

    // Input
    printf("Enter name: ");
    fgets(p.name, sizeof(p.name), stdin);

    printf("Enter gender (0 = Male, 1 = Female, 2 = Other): ");
    int genderInput;
    scanf("%d", &genderInput);
    p.gender = (enum Gender)genderInput;
    // Output 
    printf("Name: %s", p.name);
    printf("Gender: ");

    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Invalid gender\n");
    }

    return 0;
}