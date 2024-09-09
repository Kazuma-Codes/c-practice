#include <stdio.h>

int main() {
    int num, sum = 0;

    // Input the 4-digit number
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    // Check if the number is a 4-digit number
    if (num < 1000 || num > 9999) {
        printf("The number is not a 4-digit number.\n");
        return 1; // Exit the program with an error code
    }

    // Calculate the sum of digits using a loop
    for (int i = 0; i < 4; i++) {
        sum += num % 10;  // Add the last digit to sum
        num /= 10;        // Remove the last digit
    }

    // Output the result
    printf("The sum of the digits is: %d\n", sum);

    return 0;
}
