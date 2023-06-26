#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int position = 0;
    while (number % 2 == 0) {
        number = number / 2;
        position++;
    }
    
    printf("Position of first 1 in LSB: %d\n", position);
    
    return 0;
}
