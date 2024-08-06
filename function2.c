#include <stdio.h>
//the name and age here dont need to be same only the order need to be same
//void birthday(char name[], int age){    //as we need a matching set of parametres we add the age and name here  with data type
    void birthday(char x[], int y){
    printf("\nhappy birthday to u  %s",x); //s is string
    printf("\nand u are years old %d",y);
}
int main(){
    char name[] = "kazuma";
    int age = 34;

    birthday(name,age); //name and age is used to let the birthday aware of the name and age variable

    return 0;
}
