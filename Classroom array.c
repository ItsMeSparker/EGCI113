#include <stdio.h>

int main()
{
    int size, x;
    float mean;
    
    printf("How many student?:  ");
    scanf("%d", &size);
    
    int student[size];
    
    for(int i=0; i<size; i++){
        printf("\nstudent no.%d score = ", i+1);
        scanf("%d", &student[i]);
    }
    
    for(int i=0; i<size; i++){
        x = x + student[i];
    }

    mean = (float)x/size;
    printf("\nMean is %f", mean);
    
    printf("\nScores exceeded mean belong to: ");
    for(int i=0; i<size; i++){
        if (student[i] > mean) printf("\nstudent no.%d", i+1);
    }
    printf("\nScores below mean belong to: ");
    for(int i=0; i<size; i++){
        if (student[i] < mean) printf("\nstudent no.%d", i+1);
    }

    return 0;
}
