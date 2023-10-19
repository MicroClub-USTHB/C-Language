#include <stdio.h>

int main() {
    int choice;
    double area;

    printf("Choose a shape to calculate the area:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Square\n");
    printf("4. Other shape\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: // Circle
            {
                double radius;
                printf("Enter the radius of the circle: ");
                scanf("%lf", &radius);
                area = 3.14159265359 * radius * radius; // πr^2
                break;
            }

        case 2: // Rectangle
            {
                double length, width;
                printf("Enter the length and width of the rectangle: ");
                scanf("%lf %lf", &length, &width);
                area = length * width;
                break;
            }

        case 3: // Square
            {
                double side;
                printf("Enter the side length of the square: ");
                scanf("%lf", &side);
                area = side * side;
                break;
            }

        case 4: // Other shape (you can add more cases for other shapes)
            printf("You selected other shape. Implement the area calculation for this shape.\n");
            return 1; // Return an error code

        default:
            printf("Invalid choice. Please select a valid option.\n");
            return 1; // Return an error code
    }

    printf("The area is: %lf\n", area);

    return 0;
}
