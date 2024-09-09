#include <stdio.h>

int main() {
    int i, j;

    // Print the pattern
    for (i = 1; i <= 5; i++) {   // Loop for each row
        if (i == 3) {            // Special case for the 3rd row
            for (j = 1; j <= 5; j++) {
                printf("*");
            }
        } else {                // All other rows
            for (j = 1; j <= 5; j++) {
                if (j == 1 || j == 5) {
                    printf("*");  // Print '*' at the first and last columns
                } else {
                    printf(" ");  // Print spaces in between
                }
            }
        }
        printf("\n");            // Move to the next line after each row
    }

    return 0;
}
