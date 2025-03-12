#include <stdio.h>

int main(void){

    int count = 10000000;

    for (int i = 0; i < count; i++){
	printf("\r\u2022Count: %d\b", i);
	fflush(stdout);
    }

    printf("\rSuccesfully Counted To %d\n", count);
}
