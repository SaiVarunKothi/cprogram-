#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int length = printf("%s", str);

    printf("\nLength of the string: %d\n", length);

    return 0;
}
