#include <stdio.h>

/*
 *
 * WARNING!!!!
 * i think this doesnt work becouse it's not supported or something!
 * even printing binary1 and binary2 is wrong!
 *
 * */

int main(void){

    int programLoop = 1;

    int binary1 = 0b010111; 
    int binary2 = 0b110100; 

    printf("binary 1: %b\nbinary 2: %b\n", binary1, binary2);

    while (programLoop){
        printf("1: AND; 2: OR; 3: XOR; 4: End: ");
        int inp;
        scanf("%d", &inp);

        switch (inp) {
            case 1:
                printf("%b\n", binary1 &= binary2);
                break;
            case 2:
                printf("%b\n", binary1 |= binary2);
                break;
            case 3:
                printf("%b\n", binary1 ^= binary2);
                break;
            case 4:
                programLoop = 0;
                break;
        }
    }

    return 0;
}
