#include <stdio.h>
#include <stdlib.h>
#define Size 10

int main()
{
    int i, score[Size] ;
    int min,max,sum ;
    float avg ;

    for(i=0;i<Size;i++){
        printf("Input score %d: ", i+1);
        scanf("%d",&score[i]);
    }
    min=score[0];
    max=score[0];
    for(i=1;i<Size;i++){
        if (max<score[i]) max=score[i];
        if (min>score[i]) min=score[i];
    }
    printf("%d and %d", max, min);
}
