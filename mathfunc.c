#include <stdio.h>

int frfrfr();
void ngl();
void susamogus();

int main()
{
    int F, P1, P2, S1, S2;
    int Factorial, Permutation;
    
    int choices;
    printf("What do you want to do?\n");
    printf("1. Factorial\n");
    printf("2. Permutation\n");
    printf("3. Summation\n");
    printf("4. Exit the program\n");
    
    scanf("%d", &choices);
    
    switch(choices){
        case 1:
            printf("Input your number: ");
            scanf("%d", &F);
            Factorial = frfrfr(F);
            printf("The result is %d", Factorial);
            break;
        case 2:
            printf("Input n: ");
            scanf("%d", &P1);
            printf("Input r: ");
            scanf("%d", &P2);
            
            int n = frfrfr(P1);
            int nMinusr = frfrfr(P1-P2);
            Permutation = n/nMinusr;
             printf("The result is %d", Permutation);
            break;
        case 3:
            printf("Input first number: ");
            scanf("%d", &S1);
            printf("Input second number: ");
            scanf("%d", &S2);
            susamogus(S1, S2);
            break;
        case 4:
            break;
        
        default:
        printf("Unknown\n");
    }

    return 0;
}

int frfrfr(int x){
    for (int i=x-1; i>0;i--){
        x = x*i;
    }
    return x;
}

void susamogus(int x, int y){
    x = x+y;
    printf("The result is %d", x);
}

