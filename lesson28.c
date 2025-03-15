#include <complex.h>
#include <stdio.h>
#include <stdlib.h>

void print_atexit(){
    printf("Using Atexit!");
}

void print_quick_exit(){
    printf("Using Quick Exit!");
}

int main(void){

    atexit(print_atexit);

    at_quick_exit(print_quick_exit);

    quick_exit(0);

    exit(EXIT_SUCCESS);
}
