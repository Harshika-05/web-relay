#include <stdio.h>

int main() {
    int num;
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0) {
            positiveCount++;
        } else if (num < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nCount of Positive Numbers: %d\n", positiveCount);
    printf("Count of Negative Numbers: %d\n", negativeCount);
    printf("Count of Zeroes: %d\n", zeroCount);

    return 0;
}
