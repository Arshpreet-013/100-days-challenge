//Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>
enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};
int main() {
    enum TrafficLight light;

    // Example usage: change the value of 'light' to test different outputs
    light = RED; // Change this to YELLOW or GREEN to test other cases

    switch(light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid traffic light color\n");
            break;
    }

    return 0;
}