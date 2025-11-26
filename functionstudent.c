//Return a structure containing top student's details from a function.
#include <stdio.h>
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};struct Student getTopStudent(struct Student students[], int count) {
    struct Student topStudent = students[0];
    for (int i = 1; i < count; i++) {
        if (students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
    }
    return topStudent;
}int main() {
    struct Student students[5];
    // Input details for 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter name, roll number and marks of student %d:\n", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].rollNumber, &students[i].marks);
    }
    // Get the top student
    struct Student topStudent = getTopStudent(students, 5);
    // Print the details of the top student
    printf("\nTop Student Details:\n");
    printf("Name: %s, Roll Number: %d, Marks: %.2f\n", 
           topStudent.name, topStudent.rollNumber, topStudent.marks);
    return 0;
}