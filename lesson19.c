#include "lesson18_math.h"
#include "lesson18_debug.h"

#define DEBUG

int main(void){
    PROJECT_SUM();
    
    printf("PI: %.2f\n", PI);
    printf("GRAVITY: %.2f\n", GRAVITY);

    CHECK(1 > 5, "five is bigger than nine");
}