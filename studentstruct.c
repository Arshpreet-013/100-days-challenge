//Store details of 5 students in an array of structures and print all.
#include <stdio.h>
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};int main() {
    struct Student students[5];
    // Input details for 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter name, roll number and marks of student %d:\n", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].rollNumber, &students[i].marks);
    }
    // Print details of all students
    printf("\nDetails of all students:\n");
    for (int i = 0; i < 5; i++) {   
        printf("Student %d: Name: %s, Roll Number: %d, Marks: %.2f\n", 
               i + 1, students[i].name, students[i].rollNumber, students[i].marks);
    }
    return 0;
}