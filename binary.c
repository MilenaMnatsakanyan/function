#include <stdio.h>

void binary(int n){
	if(n > 0) {
	
	binary(n / 2);
	printf("%d", n % 2);
	}
}
int main() {
	int n = 0;
	 printf("Enter the number : ");
	 scanf("%d", &n);
	 binary(n);
	 return 0;
}
