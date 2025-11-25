//Assign explicit values starting from 10 and print them.
#include <stdio.h>
enum Numbers {
    TEN = 10,
    ELEVEN,
    TWELVE,
    THIRTEEN,
    FOURTEEN
};
int main() {
    enum Numbers num;
    printf("Numbers with their explicit integer values:\n");
    for (num = TEN; num <= FOURTEEN; num++) {
        switch(num) {
            case TEN:
                printf("TEN: %d\n", TEN);
                break;
            case ELEVEN:
                printf("ELEVEN: %d\n", ELEVEN);
                break;
            case TWELVE:
                printf("TWELVE: %d\n", TWELVE);
                break;
            case THIRTEEN:
                printf("THIRTEEN: %d\n", THIRTEEN);
                break;
            case FOURTEEN:
                printf("FOURTEEN: %d\n", FOURTEEN);
                break;
        }
    }
    return 0;   
}