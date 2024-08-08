//while loop checks a condition then executes the block of code
//do while loop executes the code first then checks the condition

#include <stdio.h>

int main(){
    int number = 0;
    int sum = 0;

    do{
        printf("enter a number above 0");
        scanf("%d",&number);
        if(number>0)
        {
            sum += number;
        }
    }while(number > 0);

    printf("sum: %d", sum);
    return 0;
}