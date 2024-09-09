#include <stdio.h>

int main() {
    int i, j;

    // Print the pattern
/*    for (i = 1; i <= 5; i++) {   // Loop for each row
        for (j = 1; j <= i; j++) {   // Loop for each column in the row
            printf("*");            // Print an asterisk
        }
        printf("\n");                // Move to the next line after each row
    }*/
     for (i = 5; i >= 1; i--) {   // Loop for each row starting from 5 down to 1
        for (j = 1; j <= i; j++) {   // Loop for each column in the row
            printf("*");            // Print an asterisk
        }
        printf("\n");                // Move to the next line after each row
    }

    return 0;
}
