/*#include <stdio.h>

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
}*/
#include <stdio.h>

int main() {
    char n;

    // Read a character from the user
    printf("Enter a character: ");
    scanf("%c", &n);

    // Check if the entered character is a lowercase alphabet using conditional operators
    
if((n>=0 && n<=47)||(n>=58 && n<=64)|| (n>=91 && n<=96) || (n>=123 && n<=127))
{
    printf("Entered character is special symbol.\n");
}
 else {
        printf("The entered character '%c' is not a lowercase alphabet.\n", n);
    }

    return 0;
}
