//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>

enum Status {
    SUCCESS = 1,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status status;

    // Example: set status manually (you can change this value)
    status = SUCCESS;

    // Print message based on status
    switch (status) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;

        case FAILURE:
            printf("Operation failed.\n");
            break;

        case TIMEOUT:
            printf("Operation timed out.\n");
            break;

        default:
            printf("Unknown status.\n");
    }

    return 0;
}
