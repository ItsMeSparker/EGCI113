#include <stdio.h>
#include <math.h>

int main()
{
    const double Pi = 3.14159 ;
    double radius, circumference, area;
    
    printf("\n Enter radius of a circle: ");
    scanf("%lf", &radius);
    
    circumference = 2 * Pi * radius ;
    area = Pi * pow(radius, 2);
    
    printf("%lf  %lf", circumference, area);



    return 0;
}
