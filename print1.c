#include <stdio.h>
void  print(int n){
	if(n >= 0){
		
		printf("%d", n);
	
		print(n - 1);
	}
		
}

int main() {
	int n = 0;
	printf("Enter the number : ");
	scanf("%d", &n);
	print(n);
	return 0;
}
picsartacademy@picsart-academy-00-lnx
