#include <stdio.h>
int x = 0;
int sum(int num){
	if(num > 0){
		x += num % 10;
		sum(num / 10);
	}
	return x;
}
int main () {
	int num = 0;
	printf("Enter the number : ");
	scanf("%d", &num);
	printf("%d", sum(num));
	return 0;
