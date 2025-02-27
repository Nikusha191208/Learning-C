#include <stdio.h>

void swap(int*, int*);

void printNumbers(int, int);

int main(void){
  int num1 = 25;
  int num2 = 34;
  
  printNumbers(num1, num2);

  swap(&num1, &num2);

  printNumbers(num1, num2);
}

void swap(int *num1Ptr, int *num2Ptr){
  int temp = *num1Ptr;
  *num1Ptr = *num2Ptr;
  *num2Ptr = temp;
}

void printNumbers(int num1, int num2){
  printf("Num1: %d\nNum2: %d\n", num1, num2);
}
