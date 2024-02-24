#include <stdio.h>

int main() {
    char ch;

    // Read a character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the entered character is a lowercase alphabet using conditional operators
    if (ch >= 'a' && ch <= 'z') {
        printf("The entered character '%c' is a lowercase alphabet.\n", ch);
    } else {
        printf("The entered character '%c' is not a lowercase alphabet.\n", ch);
    }

    return 0;
}
