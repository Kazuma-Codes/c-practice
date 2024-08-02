#include <stdio.h>
#include <string.h>

int main(){
    char name[25];   //25 here means that the longest no of words is 25

    int age;

    printf("\nHow old are you ");
    scanf("%d", &age); //%d is used here as ther is int value

    printf("You are %d years old", age);

    printf("\nWhat is ur name ");
    //scanf("%s",&name);          //this doesn't work with a name with space 

    fgets(name, 25, stdin);         //stdin means standard input
    printf("your name is %s", name);
    return 0;
}