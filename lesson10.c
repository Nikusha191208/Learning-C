#include <stdio.h>

int size(void *_arrPtr_);

int main(void){
	char *name = "Nikoloz";
	printf("Size: %d\n", size(name));
}

int size(void *_arrPtr_){
	char *arrPtr = _arrPtr_;
	int i = 0;

	while (*arrPtr++ != '\0')
		i++;

	return i;
}
