#include <stdio.h>

int main()
{
    char ch;
    printf("\nPress y/Y for yes or n/N for no: ");
    
    // Read a single character from the keyboard
    ch = getchar();
    
    // Print the character that was entered
    putchar(ch);
    printf("\n");  // Move to the next line for better output formatting
    
    // Check for 'y' or 'Y'
    if(ch == 'Y' || ch == 'y')
    {
        printf("You opted for yes\n");  // Print if user presses 'y' or 'Y'
    }
    else
    {
        printf("You opted for no\n");  // Print if user did not press 'y' or 'Y'
    }

    return 0;
}
