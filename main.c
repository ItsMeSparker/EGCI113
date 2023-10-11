/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    
    int x; //declearation
    x = 123; //initialization
    int y = 321; //declearation and initialization
    
    int age = 21; //integer
    float gpa = 2.03; //float point number
    char grade = 'C'; //single character
    char name[] = "Bro"; //array of character
    
    printf("Hello %s \n", name);
    printf("You are %d years old\n", age);
    printf("Your average grade is %c\n", grade);
    printf("Your GPA is %f\n", gpa);
    return 0;
}
