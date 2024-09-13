#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year > 2000) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("The year is a leap year.\n");
        } else {
            printf("The year is not a leap year.\n");
        }
    } else {
        printf("The year is not after 2000.\n");
    }

    return 0;
}