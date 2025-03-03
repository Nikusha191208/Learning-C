#include <stdio.h>

void _readFile_(char *path);
void _writeFile_(char *path);


int main(void){

	char filePath[] = "lesson8.txt";

	int programIsRunning = 1;
	while (programIsRunning){
		printf("\nRead = 0, Write = 1, EndProgram = 2: ");
		int userInput;
		scanf("%d", &userInput);

		if (userInput == 0)
			_readFile_(filePath);
		else if (userInput == 1)
			_writeFile_(filePath);
		else if (userInput == 2)
			programIsRunning = 0;
		else 
			printf("\nIncorect Input!");
	}

	printf("\nProgram Ended.\n");

}


void _readFile_(char *path){
	FILE *file = fopen(path, "r");

	if (file == NULL){
		fprintf(stderr, "\nERROR: can't find file!");
	} else {
		char buffer[1000];
		int lineCount = 1;

		while ( fgets(buffer, sizeof buffer, file) != NULL ){
			printf("\n%d. %s", lineCount, buffer);

			lineCount++;
		}
	}

	fclose(file);
}

void _writeFile_(char *path){
	FILE *file = fopen(path, "w");

	if (file == NULL){
		fprintf(stderr, "\nERROR: can't find file!");
	} else {
		printf("\nWrite Your Note: ");
		char buffer[1000];
		scanf("%s", buffer);

		fputs(buffer, file); 
	}

	fclose(file);
}

