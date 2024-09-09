#include <stdio.h>

// Function to reverse the number
int reverseNumber(int num, int reversed) {
    if (num == 0)
        return reversed;
    int remainder = num % 10;
    reversed = reversed * 10 + remainder;
    return reverseNumber(num / 10, reversed);
}

int main() {
    int num, reversed = 0;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number for comparison
    int original = num;

    // Call the recursive function to reverse the number
    reversed = reverseNumber(num, reversed);

    // Check if the number is a palindrome
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
