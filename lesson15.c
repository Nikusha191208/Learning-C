#include <stdio.h>

extern const float PI;
extern const float GRAVITY;

static int a = 50;
static int b = 60;

void birthday(){
	static int age;

	age++;

	printf("\nYou are now %d years old.", age);
}

void printMath(){
	printf("\nPI: %2f", PI);
	printf("\nGravity: %2f", GRAVITY);
}

int add(int *restrict a, int *restrict b){
	return *a + *b;
}

int main(void){
	for (register int i = 0; i < 10; i++)
		birthday();

	printMath();

	printf("\n%d + %d = %d", a, b, add(&a,&b));
}
