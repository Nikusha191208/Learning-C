#include <stdio.h>

enum STATUS {
    EXIT_SUCCESS,
    EXIT_FAILURE,
    GOOD_API_REQUEST = 200,
    BAD_API_REQUEST = 400
};

int main(void){

    enum STATUS goodRequest = GOOD_API_REQUEST;
    int badRequest = BAD_API_REQUEST;

    printf("Good Request: %d\nBad Request: %d\n", goodRequest, badRequest);

    return EXIT_SUCCESS;
}
