#include <stdio.h>

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

    // Call the recursive function
    reversed = reverseNumber(num, reversed);

    // Output the reversed number
    printf("Reversed number: %d\n", reversed);

    return 0;
}
