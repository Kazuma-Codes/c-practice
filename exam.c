#include<stdio.h>

/*int main(){

    int a, b;

    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);


    printf("Addition of %d & %d is= %d\n", a, b, a+b);

    printf("Subtraction of %d & %d is= %d\n", a, b, a-b);

    printf("Quotient of %d & %d is= %d\n", a, b, a/b);

    printf("Remainder of %d & %d is= %d\n", a, b, a%b);

    return 0;

}*/
/*#include <stdio.h>

#include <math.h>

int main() {

    double num;
    double result;

    int n;

    printf("Enter the number: ");

    scanf("%lf", &num);

    printf("Enter the value of n for nth root: ");

    scanf("%d", &n);

    result = pow(num, 1.0 / n);

    printf("The %dth root of %.2lf is %.32lf\n", n, num, result);

    return 0;

}*/
/*#include<stdio.h>

int main()

{

int a = 4;

int b = 0;

printf("\n Enter number of positions for the bits to shift to the left : ");

// accepting the value of second operand from the user

scanf("%d", &b);

printf("The result of left shift operation is : ");

// Binary value of 40 is 101000

printf("\n %d << %d = %d", a, b, a<<b);

printf("The result of right shift operation is : ");

printf("\n %d << %d = %d", a, b, a>>b);}*/
#include <stdio.h>

int main() {

  int a, b;

  // Post-increment

  a = 1;

  b = a++;

  printf("%d ", b);  // prints 1

  // Pre-increment

  a = 1;

  b = ++a;

  printf("%d ", b);  // prints 2

}

 