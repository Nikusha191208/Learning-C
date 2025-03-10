#include <stdio.h>

void startprogam(){
  printf("program started.\n");
}

void endprogram(void){
  printf("program ended.\n");
}

void sayHello(char *name);

int add(int, int);


int main(void){

  startprogam("testing if i can pass parameter:)");

  sayHello("Nikoloz"); 
  
  int a = 50;
  int b = 75;
  printf("%d + %d = %d", a, b, add(a,b));

  endprogram();
}


void sayHello(char *name){
  printf("Hello %s\n", name);
}

int add(int a, int b){
  return a + b;
}
