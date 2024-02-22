#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, diameter, circumference, area;


    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);


    diameter = 2 * radius;


    circumference = 2 * PI * radius;

    area = PI * radius * radius;

    // Print the results
    printf("Diameter of the circle: %.2f\n", diameter);
    printf("Circumference of the circle: %.2f\n", circumference);
    printf("Area of the circle: %.2f\n", area);

    return 0;
}
