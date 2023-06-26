#include <stdio.h>

int main() {
    int number, digit;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Enter a digit: ");
    scanf("%d", &digit);
    
    int resulting_number = number * 10 + digit;
    
    printf("Resulting number: %d\n", resulting_number);
    
    return 0;
}
