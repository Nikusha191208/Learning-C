
#ifndef LESSON18_DEBUG_H
#define LESSON18_DEBUG_H


#include <stdio.h>

#define CHECK(res, act) \
    if (res) \
        printf("SUCCESS: %s\n", act); \
    else \
        printf("ERROR: %s, File: %s, Fun: %s, Line: %d\n", act, __FILE__, __func__, __LINE__); 
    
#define PROJECT_SUM() printf("Date: %s, Time: %s, FILE: %s\n", __DATE__, __TIME__, __FILE__);

#endif