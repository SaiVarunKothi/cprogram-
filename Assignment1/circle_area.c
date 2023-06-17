#include <stdio.h>

int main() {
    float radius, area;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    area = 3.14159 * radius * radius;
    
    printf("Area of the circle is %f having the radius %f.\n", area, radius);
    
    return 0;
}

