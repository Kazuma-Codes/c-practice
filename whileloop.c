//while loop  repeats a section of code unlimited no of times

#include <stdio.h>
#include  <string.h>

int main(){

    char name[25];
    printf("\n Whats your name");
    fgets (name,25,stdin);
    name[strlen(name) - 1] = '\0';

    while(strlen(name)== 0 ){
        printf("\nyou didn't enter any name");
        printf("\n Whats your name");
        fgets (name,25,stdin);
        name[strlen(name) - 1] = '\0';


    }

    printf("hello %s",name);

    return 0 ;
}