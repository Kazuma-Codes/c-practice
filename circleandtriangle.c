#include <stdio.h>
#include <math.h>
/*int main(){
    const double PI = 3.14159;
    const double PI = 3.14159;
    onst double PI = 3.14159;
    double radius; 
    double circumference;
    double area;

    printf("\nEnter the radius of a circle");
    scanf("%lf", &radius);

    circumference = 2*PI*radius;
    area = PI*radius*radius;

    printf("\ncircumference: %lf", circumference);
    printf("\narea: %lf",area);

    return 0;
}*/

int main(){
    double A;
    double B;
    double C;

    printf("enter side A");
    scanf("%lf", &A);

    printf("enter side B");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);

    printf("side C: %lf", C);
    return 0;

}
