#include <stdio.h>
int main(){
    int rows;
    int columns;
    char symbol;

    printf("\n enter the no of rows u want: ");
    scanf("%d",&rows);

    printf("\n enter the no of columns u want: ");
    scanf("%d",&columns);

    for(int i = 1;i <= rows;i++)
    {
        for ( int j = 1;j<= columns;j++)
        {
            printf("%d",j);    
    }
        printf("\n");   
    }


    return 0;
}