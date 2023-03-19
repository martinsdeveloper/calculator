#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "calculator.h"

int main(void){
	int action, basicAction;
	int value1;
	int value2;
	int sumValue;
	char func;
	printf("\nEnter number:");
	scanf("%i", &value1);
	printf("\naction(+-*/^v):");
	scanf(" %c", &func);
	printf("\nEnter number:");
	scanf("%i", &value2);
	switch((int)func){
		case 43: //+
			sumValue = add(value1, value2);
			break;
		case 45: //-
			sumValue = subtract(value1, value2);
			break;
		case 42: //*
			sumValue = multiply(value1, value2);
			break;
		case 47: // /
			break;
		case 94: // ^
			sumValue = putInPower(value1, value2);
			break;
		case 118: // v
			break;
	}
	printf("Result = %d", sumValue);
	return 0;
}