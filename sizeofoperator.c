#include <stdio.h>
int main()
{
int a;
float b;
double c;
char d;
printf("Size of int=%lu bytes\n",sizeof(a));        //4
printf("Size of float=%lu bytes\n",sizeof(b));      //4
printf("Size of double=%lu bytes\n",sizeof(c));     //8
printf("Size of char=%lu byte\n",sizeof(d));        //1
return 0;
}