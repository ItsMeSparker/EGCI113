#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c ;
    printf("INPUT a, b, c: ");
    scanf("%d:%d:%d", &a, &b, &c);
    
    printf("\nYour Polynomial Functiob is: %dx^2+%dx+%d", a, b, c);
    
    
    double result = sqrt(pow(b,2)+(4*a*c));
    printf("\n\n Your result of the squre root will be: %lf", result);
    
    

    return 0;
}
