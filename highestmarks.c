//Find and print the student with the highest marks.
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
    // Find the student with the highest marks
    struct Student topStudent = students[0];
    for (int i = 1; i < 5; i++) {
        if (students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
    }
    // Print the details of the student with the highest marks
    printf("\nStudent with the highest marks:\n");
    printf("Name: %s, Roll Number: %d, Marks: %.2f\n", 
           topStudent.name, topStudent.rollNumber, topStudent.marks);
    return 0;
}