#include <stdio.h>
#include <stdarg.h>

int add(int count, ...){ 

    int sum = 0;

    va_list num;

    va_start(num, count);

    for (int i = 0; i < count; i++)
        sum += va_arg(num, int);

    va_end(num);
    return sum;
}

int main(void){


    printf("5 + 25 + 6 + 12 + 555 + 31 + 50 = %d\n", add(6, 5, 25, 6, 12, 555, 31, 50));


    return 0;
}
