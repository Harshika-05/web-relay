#include <stdio.h>

int main() {
    char ch;

    // Prompt user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the entered character is a special symbol using conditional operators
    if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))) {
        printf("%c is a special symbol.\n", ch);
    } else {
        printf("%c is not a special symbol.\n", ch);
    }

    return 0;
}
