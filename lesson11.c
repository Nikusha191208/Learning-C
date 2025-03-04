#include <stdio.h>
#include <stdlib.h>

int main(){

	int gameLoop = 1;
	int userInpt;


	int *arrPtr;
	int size = 0;
	int addValue;

	while (gameLoop){

		printf("\nExit: 0, Push: 1, Cut Last: 2, Print: 3 >>> ");
		scanf("%d", &userInpt);

		switch (userInpt) {
			case 0:
				gameLoop = 0;
				break;
			case 1:
				printf("\nNumber To Push: ");
				scanf("%d", &addValue);

				if (size == 0){
					arrPtr = malloc(sizeof(float));
				} else {
					arrPtr = realloc(arrPtr, (size + 1) * sizeof(float));
				}

				arrPtr[size] = addValue;
				size++;
				break;
			case 2:
				if (size > 0)
					arrPtr = realloc(arrPtr, --size);
				break;
			case 3:
				printf("\nArr: ");
				for (int i = 0; i < size; i++)
					printf("%d ", arrPtr[i]);
				break;
		}

	}

	free(arrPtr);
}
