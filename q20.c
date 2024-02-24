#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    char color[7][7]={"red","orange","yellow","green","blue","indigo","violet"};
    printf("enter any number between 0 to 6:\n");
    scanf("%d",&n);
    printf("the color assigned to %d is:%s",n,color[n]);

    return 0;
}
/*chatgpt-
#include <stdio.h>

int main() {
    char color;
    
    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%hhd", &color);

    // Check each bit and print the corresponding color
    if (color & (1 << 0)) {
        printf("Red\n");
    }
    if (color & (1 << 1)) {
        printf("Orange\n");
    }
    if (color & (1 << 2)) {
        printf("Yellow\n");
    }
    if (color & (1 << 3)) {
        printf("Green\n");
    }
    if (color & (1 << 4)) {
        printf("Blue\n");
    }
    if (color & (1 << 5)) {
        printf("Indigo\n");
    }
    if (color & (1 << 6)) {
        printf("Violet\n");
    }

    return 0;
}
*/