//switch is a more efficient and alternate way of else and if 
//when there are many cases 

#include <stdio.h>

int main(){
    char grade;

    printf("\n Enter a grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
        printf("perfect \n");
        break;              //break is used to stop printing after finding a suitable case
    
        case 'B':
        printf("did good \n");
        break;        
   
        case 'C':
        printf("good \n");
        break;

        case 'D':
        printf("try harder \n");
        break;

        case 'E':
        printf("poor \n");
        break;

        



    }
    return 0;
}