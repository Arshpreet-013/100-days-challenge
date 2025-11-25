//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>
enum MenuOption {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};
int main() {
    enum MenuOption choice;
    int a, b, result;

    // Example: set choice manually (you can change this value)
    choice = ADD; // Change to SUBTRACT or MULTIPLY to test other operations

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Perform operation based on menu choice
    switch (choice) {
        case ADD:
            result = a + b;
            printf("Result of Addition: %d\n", result);
            break;

        case SUBTRACT:
            result = a - b;
            printf("Result of Subtraction: %d\n", result);
            break;

        case MULTIPLY:
            result = a * b;
            printf("Result of Multiplication: %d\n", result);
            break;

        default:
            printf("Invalid menu option.\n");
    }

    return 0;
}