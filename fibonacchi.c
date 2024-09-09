#include <stdio.h>

int main() {
    int i, n;

    // Initialize the first two terms
    int t1 = 0, t2 = 1;

    // Get the number of terms from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Handle edge cases
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else if (n == 1) {
        printf("Fibonacci Series: %d\n", t1);
    } else {
        // Print the first two terms
        printf("Fibonacci Series: %d %d ", t1, t2);

        // Initialize the next term
        int nextTerm = t1 + t2;

        // Print the 3rd to nth terms
        for (i = 3; i <= n; ++i) {
            printf("%d ", nextTerm);
            t1 = t2;
            t2 = nextTerm;
            nextTerm = t1 + t2;
        }
        
    }

    return 0;
}
