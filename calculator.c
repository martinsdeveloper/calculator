#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int multiply(int value1, int value2){
	return value1 * value2;
}

int putInPower(int value1, int value2){
	int i;
	int sum = value1;
	for(i=1; i<value2; i++) {
		sum = sum*value1;
	}
	return sum;
}

int add(int value1, int value2){
	return value1 + value2;
}

int subtract(int value1, int value2){
	return value1 - value2;
}
