#include<stdio.h>
int main()
{
 int ch=0;
 while(ch<=255)
 {
    printf("the ASCII VALUE:%d, equi char:%c\n",ch,ch);
    ch++;
 }   
    return 0;
}
/*#include <stdio.h>

int main() {
    int asciiValue = 0;

    // Using a while loop to iterate through ASCII values
    while (asciiValue <= 127) {
        printf("ASCII Value: %d, Character: %c\n", asciiValue, asciiValue);
        asciiValue++;
    }

    return 0;
}*/
