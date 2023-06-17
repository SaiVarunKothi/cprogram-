#include <stdio.h>

int main() {
    int hours, minutes;

    printf("Enter time in format HH:MM: ");
    scanf("%d:%d", &hours, &minutes);

    printf("%d hour and %d minute\n", hours, minutes);

    return 0;
}
