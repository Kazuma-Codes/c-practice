#include <stdio.h>
int main(){

    int age;

    printf("\n Enter your age: ");
    scanf("%d", &age);


    if (age >=18){
        printf("you are now signed up");
    }
    /*else if(age < 0){
        printf("you are too young");  //this is same as else so see
    }*/
    else{
        printf("you are too young to sign up");}

}