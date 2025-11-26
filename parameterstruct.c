//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>
struct Car {
    char model[50];
    int year;
    float price;
};void printCarDetails(struct Car car) {
    printf("Car Model: %s\n", car.model);
    printf("Manufacturing Year: %d\n", car.year);
    printf("Price: %.2f\n", car.price);
}int main() {
    struct Car myCar;
    // Input car details
    printf("Enter car model, manufacturing year and price:\n");
    scanf("%s %d %f", myCar.model, &myCar.year, &myCar.price);
    // Print car details
    printCarDetails(myCar);
    return 0;
}