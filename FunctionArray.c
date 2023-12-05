#include <stdio.h>
#define SIZE 5

int max(int[], int);

int main(){
    int array[SIZE] = {4,1,2,6,7};;
    printf("Max is %d", max(array, SIZE));

    return 0;
}

int max(int array[], int array_size){
    int max = array[0];
    for(int i=1; i<array_size; i++){
        if (array[i]>max) max = array[i];
    } 
    return max;
}
