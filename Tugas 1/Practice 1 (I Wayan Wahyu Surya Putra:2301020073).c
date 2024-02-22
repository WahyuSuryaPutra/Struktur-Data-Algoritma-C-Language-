#include <stdio.h>

int main() {
    int num1, num2;
    float sum, average;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer (different from the first one): ");
    scanf("%d", &num2);

    sum = num1 + num2;

    average = sum / 2.0;

    // Print the sum and average
    printf("Sum: %d\n", (int)sum); // Typecast to int for sum
    printf("Average: %.2f\n", average);

    return 0;
}
