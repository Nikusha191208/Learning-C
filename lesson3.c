#include <stdio.h>
#include <stdlib.h>

int main(void){

  char *name = "Nikoloz";
  char class = 'b';
  int age = 16;
  float balance = 256.6;
  printf("Name: %s\nClass: %c\nAge: %d\nBalance: %f Lari\n", name, class, age, balance);

  printf("Sizeof int: %zu\nSizeof float: %zu\nSizeof Char: %zu\nSizeof char*: %zu\n", sizeof(int), sizeof(float), sizeof(char), sizeof(char*));

  printf("He Is %s\n", age >= 18 ? "Adult" : "Is Not Adult");

  printf("Do You Want To Generate Random Number? (1/0)");
  int userRes;
  scanf("%d", &userRes);

  switch (userRes){
  case 1:
    printf("Random Number Is %d\n", rand());
  break;
  default:
    printf("Incorrect Commmand!\n");
    /* No Break! */
  case 0: 
    printf("Nothing Is Generated!\n");
    break;
  }

  printf("Enter Count Down Number: ");
  int count;
  scanf("%d", &count);
  for (int i = count; i >= 0; i--)
    printf("%d\n", i);
}
