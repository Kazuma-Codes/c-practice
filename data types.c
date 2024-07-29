#include <stdio.h>
#include <stdbool.h>

int main(){
    char a = 'C';                   // single character %c
    char b[] = 'Bro';               // array of character %s

    float c = 3.141592;             // 4 bytes (32 bits of precision ) 6-7 digits %f
    double d = 3.141592653542424;   // 8bytes (64 bits of precision ) 15-16 digits %lf


    bool e = true;                  // 1byte (true or false) %d


    char f = 100;                   // 1 byte (-128 to +127) %d or %c
    unsigned char g = 255;          // 1 byte (0 to +255) %d or %c


    short int  h = 32767;           // 2 bytes (-32,768 to +32,767) %d
    unsigned short int i = 65535;   // 2 bytes (0 to +65,535) %d

    int j = 2134535335;             // 4 bytes (-2,147,483,648 to +2,147,483,647) %d
    unsigned int k = 428978787889;  //4 bytes (0 to +4,294,967,295) %u

    long long int l = 92222434234242;       // 8 bytes (-9 quintillion to +9 quintillion )
    unsigned long long int m = 17546786784523;      //8bytes (0 to +18 quintillion) %ll


    
    printf("%c\n", a);      // char
    printf("%s\n", b);      // character array
    
    printf("%f\n", c);      // float    
    printf("%lf\n", d);     // double
    
    printf("%d\n", e);      // bool

    printf("%d\n", f);      // char as numeric   
    printf("%d\n", g);      // unsigned char as numeric value
    
    printf("%d\n", h);      // short
    
    printf("%d\n", i);      // unsigned int
    
    printf("%d\n", j);      // int
    
    printf("%u\n", k);      // unsigned int
    
    printf("%lld\n", l);        // long long int
    
    printf("%llu\n", m);        // unsigned long long int
}