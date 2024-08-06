#include <stdio.h>
#include <string.h>

int main(){
    char string1[]= "Hello";
    char string2[] = "Hi";


    strlwr(string1);             //converts string to lower case    

    strupr(string1,string2);        //converts string to upper case

    strcat(string1,string2);        //append string2 to end of string1

    strncat(string1,string2,1);     //append n character from string2 to string1

    strcpy(string1,string2);        //copy string2 to string1

    strncpy(string1,string2,4);     //copy n characters of string2 to string1

    strset(string1,?);              //sets all  characters of a string to a given character

    strnset(string1,'x',1);         //sets first n characters of a string to a given character

    strrev(string1);                //reverses a string

    printf("%s",string1);

    return 0;
}