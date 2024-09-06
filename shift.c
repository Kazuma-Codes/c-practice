#include <stdio.h>

int main() {
    int num = 5;       // Binary: 0000 0101
    int result = num << 1;  // Shift left by 1: 0000 1010 (10 in decimal)
    
    printf("Left shift result: %d\n", result);  // Output: 10
    return 0;
}
