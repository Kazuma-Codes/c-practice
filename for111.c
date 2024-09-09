#include <stdio.h>

int main() {
    int i, j;

    // Print the pattern
    for (i = 1; i <= 4; i++) {   // Loop for the first part of the pattern
        for (j = 1; j <= i; j++) {
            printf("1");
        }
        printf("\n");
    }

    for (i = 3; i >= 1; i--) {   // Loop for the second part of the pattern
        for (j = 1; j <= i; j++) {
            printf("1");
        }
        printf("\n");
    }

    return 0;
}
