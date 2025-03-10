#include <stdio.h>
#include <string.h>

int main(void){

   char name[] = "Nikoloz";
   char *lastName = "Lortkipanidze";

   printf("Name: %s(%d chars)\nLastname: %s(%d chars)\n", name, strlen(name), lastName, strlen(lastName));

   char *namePtr = name;

   char nameCopy[strlen(name)];
   strcpy(nameCopy, name);

   namePtr[0] = 'D';
   name[1] = 'o';
   nameCopy[2] = 'l';

   printf("namePtr: %s\nname: %s\nnameCopy: %s\n", namePtr, name, nameCopy);

}

