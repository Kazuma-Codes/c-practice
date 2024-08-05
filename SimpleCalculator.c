#include <stdio.h>

int main(){
    char operator;
    double num1;
    double num2;
    double result;

    printf("\n Enter an operator (+ - * /) : ");
    scanf("%c",&operator);

    printf("\nEnter the first value: ");
    scanf("%lf", &num1);

    printf("Enter the second value: ");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("\nresult is :%lf",result);
            break;      //to stop the process
        case '-':
            result = num1 - num2;
            printf("\nresult is :%lf",result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nresult is :%lf",result);
            break;
        
        case '/':
            result = num1 / num2;
            printf("\nresult is :%lf",result);
            break;
            

    default:
        printf("%c is not a valid", operator);
        
    }

    return 0;

    
}