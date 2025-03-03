#include <stdio.h>

struct Human {
   char *name;
   int age;
   float balance;
};

void printHuman(struct Human*);


int main(){

   struct Human human1 = {.name = "Nikoloz", .age = 16, .balance = 355.4 };

   struct Human human2 = human1;
   human2.name = "Dimitri";
   human2.age = 14;
  
   printHuman(&human1);
   printHuman(&human2);

}


void printHuman(struct Human *human){
   printf("Name: %s, Age: %d, Balance: %.1f\n", human->name, human->age, human->balance);
} 
