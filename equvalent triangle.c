#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter the lengths of the first side of the triangle: ");
    scanf("%d", &side1);
    printf("Enter the lengths of the second side of the triangle: ");
    scanf("%d", &side2);
    printf("Enter the lengths of the third side of the triangle: ");
    scanf("%d", &side3);


    if (side1 == side2 && side2 == side3) {
        printf("The triangle is equilateral.\n");
    } else {
        printf("The triangle is not equilateral.\n");
    }

    return 0;
}