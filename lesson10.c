#include <stdio.h>

typedef int bool;

typedef struct {
	char *model;
	int year;
	float prize;
	bool secondHand;
} Car;

void printCar(Car *car);

int main(void){
	Car car1 = {"BMW", 2011, 5999.9, 0};
	Car car2 = {"Mercedes", 2009, 3500.0, 1};

	printCar(&car1);
	printCar(&car1);
}

void printCar(Car *car){
	printf("\nModel: %s\nYear: %d\nPrize: %.2f\nSecondHand: %s\n",
			car->model,
			car->year,
			car->prize,
			car->secondHand ? "true" : "false");
}
