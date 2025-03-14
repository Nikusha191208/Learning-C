#include <stdio.h>

int plus(int a, int b){
    return a + b;
}

int minus(int a, int b){
    return a - b;
}

void printAnswer(int (*func) (int,int), int a, int b){
    printf("Answer: %d\n", func(a, b));
}

int main(void){

    int num = 50;
    int *numP = &num;
    int **numPP = &numP;
    int ***numPPP = &numPP;
    printf("Num: %d\nDereference Num Pointer: %d\nNum Pointer-Pointer: %p\nNum Pointer-Pointer-Pointer: %p\n", num, *numP, numPP, *numPPP);

    int (*func) (int, int);

    int action = 0;
    if (action == 0)
        func = plus;
    else 
        func = minus;
    
    printAnswer(func, 25, 25);

    return 0;
}
