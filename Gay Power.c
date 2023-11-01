#include <stdio.h>
#include <stdlib.h>

void square(int);
void my_pow(int, int);

int main()
{
    int x, y;
    printf("INPUT YOUR CONSTANT: ");
    scanf("%d", &y);
    printf("INPUT YOUR POWER: ");
    scanf("%d", &x);
    my_pow(y,x);
}

void my_pow(int y, int x){
    int i, e ;
    e=y ;
    for (i=1; i<x; i++){
        y = y*e ;
    }
    printf("Result = %d ", y);

}
