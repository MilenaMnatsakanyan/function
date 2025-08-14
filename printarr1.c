#include <stdio.h>
#define SIZE 5
void print(int arr[],int  size){
	if(size > 0){

		printf("%d",arr[size - 1]);		
		print(arr, size - 1);
			
	}
}
int main() {
	int arr[] = {1,2, 3, 4, 5};
	print(arr,SIZE);
	return 0;
	}

