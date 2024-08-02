#include <stdio.h>

int main(){
    
    // + (addition)
    // - (substraction)
    // * (multiplication)
    // / (division)
    // % (modulus) //gives the remainder of the division
    // ++ (increment) *shows the next number
    // -- (decrement) *shows the previous number

    int x = 5;
    //int y = 2; this is int so when 5 is divided by 2 it gives out 2 not 2.5
    float y = 2;

    //int z = x + y;

    float z = x/y; //as int cant show decimal value
    
    printf("%0.1f", z);
    
    
    return 0;
}