#include<stdio.h>

int main(){

    int a, b;

    printf("Enter the value of x: ");
    scanf("%d",&a);
    printf("Enter the value of y: ");
    scanf("%d",&b);


    printf("Addition of %d & %d is= %d\n", a, b, a+b);

    printf("Subtraction of %d & %d is= %d\n", a, b, a-b);

    printf("Quotient of %d & %d is= %d\n", a, b, a/b);

    printf("Remainder of %d & %d is= %d\n", a, b, a%b);

    return 0;

}