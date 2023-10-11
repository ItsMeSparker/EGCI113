/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter, num;
    counter=1;
    printf("INPUT YOUR NUMBER: ");
    scanf("%d", &num);


    for (counter =1; counter<=num;counter++){

    if (counter%2) printf("%d\n", counter);//3 5 7 9 11
    }
    puts ("Second loop");
    counter=1;
    while( counter<=num){

    if(counter%5==0) printf("%d\n", counter);//3 5 7 9
        counter++;
    }

    printf("This is the last value %d", counter);

    return 0;
}

