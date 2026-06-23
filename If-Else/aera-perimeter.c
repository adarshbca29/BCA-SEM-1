#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    // Input length and width from user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate Area and Perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // Output the calculated results
    printf("\nCalculated Area: %.2f\n", area);
    printf("Calculated Perimeter: %.2f\n\n", perimeter);

    // Conditional check to compare Area and Perimeter
    if (area > perimeter) {
        printf("The Area of the rectangle is GREATER than its perimeter.\n");
    } 
    else if (area < perimeter) {
        printf("The Area of the rectangle is LESS than its perimeter.\n");
    } 
    else {
        printf("The Area and Perimeter of the rectangle are EQUAL.\n");
    }

    return 0;
}
