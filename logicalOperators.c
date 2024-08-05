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

    /*float temp = 2100;
    bool sunny = true; //if u make this false the answer will come out as the other one

    if (temp <=0 || temp >=30){
        printf("\n The weather is bad!");
    }
   

    else{
        printf("the weather is good!");
    }*/

    //logical operator = ! (NOT) reverses the state of condition

    bool sunny = true;      //the value wil always come out as the opposite

    /*if(sunny == 1){
        printf("\n Is's sunny outside!");
    }*/
     if(!sunny){
        printf("\n Is's sunny outside!");
     }
    else {
        printf("\nIt's cloudy outside");
    }


    return 0;
}