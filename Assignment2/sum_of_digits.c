#include <stdio.h>

int main() {
    int number;
    printf("Enter a three-digit number: ");
    scanf("%d", &number);
    
    int digit1 = number / 100;
    int digit2 = (number % 100) / 10;
    int digit3 = number % 10;
    
    int sum_of_digits = digit1 + digit2 + digit3;
    
    printf("Sum of digits: %d\n", sum_of_digits);
    
    return 0;
}
