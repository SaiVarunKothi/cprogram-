#include <stdio.h>

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    number = number / 10 * 10;
    
    printf("Modified number: %d\n", number);
    
    return 0;
}
