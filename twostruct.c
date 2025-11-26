//Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>
struct Person {
    char name[50];
    int age;
    float height;
};int areIdentical(struct Person p1, struct Person p2) {
    return (strcmp(p1.name, p2.name) == 0) && (p1.age == p2.age) && (p1.height == p2.height);
}int main() {
    struct Person person1, person2;
    // Input for first person
    printf("Enter name, age and height of first person:\n");
    scanf("%s %d %f", person1.name, &person1.age, &person1.height);
    // Input for second person
    printf("Enter name, age and height of second person:\n");
    scanf("%s %d %f", person2.name, &person2.age, &person2.height);
    // Check if they are identical
    if (areIdentical(person1, person2)) {
        printf("The two persons are identical.\n");
    } else {
        printf("The two persons are not identical.\n");
    }
    return 0;
}