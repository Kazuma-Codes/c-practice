#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;
    
    
    printf("\n What is the temp in (C) or (F): ");
    scanf("%c" , &unit);

    unit = toupper(unit);      //this code is used to accept the lower case and convert it to upper case

    if (unit == 'C'){
        printf("\n temperature in  Celsius: ");
        scanf("%f", &temp);
        temp = (temp* 9/5) + 32;
        printf("\n The temp in Fahrenheit is : %f \n",temp);
        }

    else if (unit == 'F'){
        printf("temperature in  Fahrenheit: ");
        scanf("%f",&temp);
        temp = ((temp - 32)* 5)/9; 
        printf("\n The temp in Celsius is : %f \n",temp);}

    else {
        printf("\n %c What did u press", unit);
    }


    return 0;
}