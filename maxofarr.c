#include <stdio.h>
#include <string.h>
#define SIZE 5


int maxofarray(int arr[], int size, int i, int max){
	
	if (i == size) {
		return max;
	}

	if (arr[i] > max) {
		max = arr[i];
	}

	return maxofarray(arr, size, i + 1, max);
}


int main() {
	int arr[] = {5, 4, 8, 12, 20, 5};
	int i = 0;
	const int size = 6;
	printf("Maximum element is %d\n", maxofarray(arr, size, i + 1, arr[0]));
}
