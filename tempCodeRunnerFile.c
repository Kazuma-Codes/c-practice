#include <stdio.h>
#include <stdbool.h>

int main(){

    //logical operators = && (AND) checks if two conditions are true

    /*float temp = 25;
    bool sunny = true; //if u make this false the answer will come out as the other one

    if (temp >=0 && temp <=  30 &&sunny){
        printf("\n The weather is good!");
    }
    else{
        printf("\nThe weather is bad!");
    }*/

   //logical operator = || (OR) checks if at least one condition is true

    float temp = 25;
    bool sunny = true; //if u make this false the answer will come out as the other one

    if (temp <=0){
        printf("\n The weather is bad!");
    }
    else if(temp >=30){
        printf("\nThe weather is bad!");
    }

    else{
        printf("the weather is good!");
    }
    return 0;
}