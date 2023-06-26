#include <stdio.h>

int main() {
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);
    
    int ascii_code = character;
    printf("ASCII code: %d\n", ascii_code);
    
    return 0;
}
