//continue = skips a line of code and prints the rest
//break = exits the loop or switch completely

#include <stdio.h>
int main(){
    for (int i = 1 ;i<=20;i++)
    {
        if(i == 13) 
       
        {
        continue;
        }
         if(i == 15){
            break;
            //continue;
         }
        printf("%d\n",i);
    }
    return 0;
}