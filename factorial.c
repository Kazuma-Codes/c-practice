#include <stdio.h>

int main() {
    int num, i;
    int factorial = 1; // Using 'int' to store the factorial result

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);  // Read user input and store it in the variable `num`

    // Check if the number is negative
    if (num < 0) {
        printf("Factorial does not exist for negative numbers.\n");
    } else {
        // Loop to calculate factorial
        for (i = 1; i <= num; i++) {
            factorial *= i;  // Multiply `factorial` by each number from 1 to `num`
        }
        printf("The factorial of %d is %d\n", num, factorial);  // Print the result
    }

    return 0;
}
