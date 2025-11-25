//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>
enum UserRole {
    ADMIN,
    USER,   
    GUEST
};  
int main() {
    enum UserRole role;

    // Example usage: change the value of 'role' to test different outputs
    role = ADMIN; // Change this to USER or GUEST to test other cases

    switch(role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have minimal access.\n");
            break;
        default:
            printf("Invalid user role.\n");
            break;
    }

    return 0;
}