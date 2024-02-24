#include <stdio.h>

int main() {
    int number, count = 0;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Handle the case of negative numbers
    if (number < 0) {
        number = -number; // Make the number positive for counting digits
    }

    // Count the number of digits using a loop
    do {
        number /= 10; // Move to the next digit
        count++;
    } while (number != 0);

    // Display the number of digits 
    printf("Number of digits: %d\n", count);

    return 0;
}
