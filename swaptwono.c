#include<stdio.h>
#include<string.h>
int main(){
    /*char x = 'X';
    char y = 'Y';
    char temp;

    temp = x;
    x = y;
    y= temp;

    printf("x = %c\n",x);
    printf("y = %c",y);*/

    char x[15] = "water";    //the size of the array will make it more easier to work with the same sizes
    char y [15] = "lemonade";
    char temp[15];

    strcpy(temp,x);
    strcpy(x,y);
    strcpy(y,temp);

    printf("x = %s\n",x);
    printf("y = %s",y);

    return 0;


}