// Prints a string
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sc50.h>


int main(void)
{
    int x = get_int("what's x?");
    int y = get_int("whats y?");
    if (x < y)
    {
        printf("x is less then y");
        }
        if (x > y)
        {
            printf("x is greater than y");
        }
}