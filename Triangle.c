#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    printf("How many lines?: ");
    scanf("%d", &n);

    for (i=0; i<n;i++){
        printf("\n");
        for(j=n;j>i;j--) {
            printf(" ");
        }
        for (
             j=0;j<=i;j++) {
            printf("*");
        }
    }

    return 0;
}
