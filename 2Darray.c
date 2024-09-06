#include<stdio.h>
#include<string.h>

int main(){
    char cars[][10] =  {"mustang","hellcat","pokemon"};
    strcpy(cars[0],"tesla");
    //strspy replaces the original with the new value without changing the position
    for( int i = 0 ;i < sizeof(cars)/sizeof(cars[0]);i++)

    {
        printf("%s\n",cars[i]);
    }
    return 0;
}