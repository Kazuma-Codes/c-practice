// format specifier % this can be used to define-
// and format a data type

#include <stdio.h>

int main(){
    // %c = character
    // %s = string
    // %f = float
    // %lf = double
    // %d = integer

    // %.1 = decimal precision
    // %1 = minimum field width
    // % - = left align


    float item1 = 5.75123123;
    float item2 = 10.00;
    float item3 = 100.42;

//

    printf("Item 1: $%.2f \n", item1 );        //only 2 decimal point will display
    printf("Item 2: $%8.2f \n",item2 );         // it will display with 8 decimal place on the right side
    printf("Item 3: $%-8.2f \n",item3);           //it will go 2 decimal to left side //(it need 8. to go negative as -2 wont work use{-8.2})


    return 0;
}