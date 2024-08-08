//array = a data structure that stores many values of the same data types
#include<stdio.h>
int main(){
    double prices[] = {5,23,43,54,23,65,56};
    // printf ("%0.2lf",prices[3]);
    // printf ("%0.2lf",prices[4]);

    for(int i = 0; i<5 ; i++)
{
    printf("%0.2lf\n", prices[i]);
}
    return 0;
}