#include <stdio.h>

int main() {
    int number;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    
    int last_digit = number % 10;
    int remaining_digits = number / 10;
    int rotated_number = last_digit * 100 + remaining_digits;
    
    printf("Rotated number: %d\n", rotated_number);
    
    return 0;
}
