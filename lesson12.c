#include <stdio.h>

int var = 25;

void fun1(){
	printf("fun1 var: %d\n", var);
}

void fun2(){
	int var = 330;
	printf("fun2 var: %d\n", var);
}

int main(void){
	printf("main outer var: %d\n", var);

	{
		int var = 100;
		printf("main inner var: %d\n", var);

		{
			printf("main inner inner var: %d\n", var);
		}
	}

	fun1();
	fun2();
}
