#include <stdio.h>
int main(){

    double a;
    double b;
    double temp;
    printf("enter first no a ");
    scanf("%lf",&a);

    printf("enter second no. b ");

    scanf("%lf",&b);


    temp = a;     
    a = b;
    b = temp;

    printf("after swapping the first no. = %.0lf\n", a);

    printf("after swapping the second no. = %.0lf", b);

    return 0;



}