#include <stdio.h>

int main() {
    int n;

    // Get the number of elements in the set
    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);

    // Check if there are enough elements
    if (n <= 0) {
        printf("Invalid input. Please enter a positive number of elements.\n");
        return 1;
    }

    // Initialize variables
    int number, min, max;

    // Get the first number to initialize min and max
    printf("Enter number 1: ");
    scanf("%d", &number);
    min = max = number;

    // Loop to find the minimum and maximum
    for (int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        // Update min and max
        if (number < min) {
            min = number;
        } else if (number > max) {
            max = number;
        }
    }

    // Calculate and display the range
    int range = max - min;
    printf("The range of the set is: %d\n", range);

    return 0;
}
