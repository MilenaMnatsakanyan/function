#include <stdio.h>
	int x  = 1;
int mul(int num){
	if(num != 0){
		mul(num / 10);

	x *= num % 10;
	}
	return x;
}
int main() {
	int num = 0;
	printf("Enter the number : ");
	scanf("%d", &num);
	int res = mul(num);
	printf("%d", res);
	return 0;
}
