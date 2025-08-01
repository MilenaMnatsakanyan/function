#include <stdio.h>

float farenheit(float celsius){
	return ((celsius * 9/5) + 32);
	}
	int main() {
	float celsius = 0;
	printf("Enter the celsius : ");
	scanf("%f", &celsius);
	printf("%f", farenheit(celsius));
	return 0;
	}
