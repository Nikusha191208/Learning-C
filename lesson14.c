#include <stdio.h>
#include <stdlib.h>

int inpi(char*);
float inpf(char*);
char *inps(char*);

int main(void){
	int programLoop = 1;
	while (programLoop){
		int inp = inpi("\nNum to S: 1, S to Num: 2, Char to Int: 3, Int to Char: 4, endProgram: 5 >>> ");

		if (inp == 1){
			float inp = inpf("\nEnter Number: ");
			char string[10];
			snprintf(string, 10, "%f", inp);
			printf("\nPrinting as String: %s", string);
		} 
		else if (inp == 2){
			char *inp = inps("\nEnter String: ");

			char *log;
			float num = strtof(inp, &log);

			if (log[0] == '\0'){
				printf("\nPrinting as Number: %f", num);
			} else {
				printf("\nCan't Convert To Number, Error -> (%s)", log);
			}

			free(inp);
		} 
	}
}

int inpi(char *msg){
	printf("\n%s", msg);

	int inp;
	scanf("%i", &inp);

	return inp;
}

float inpf(char *msg){
	printf("\n%s", msg);

	float inp;
	scanf("%f", &inp);

	return inp;
}

char* inps(char *msg){
	printf("\n%s", msg);

	char *inp = malloc(10);
	scanf("%s", inp);

	return inp;
}			

