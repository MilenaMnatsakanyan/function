#include <stdio.h>
#define SIZE 5
int even(int arr[],int size){
    for(int i = 0; i < size; ++i){
        if(arr[i] % 2 == 0){
            printf("even number is : %d\n", arr[i]);
        }
    }
}
int main() {
    int arr[SIZE];
    printf("Enter the elements : ");
    for(int i = 0; i < SIZE; ++i){
        scanf("%d", &arr[i]);
    }
    even(arr, SIZE);
    return 0;
}
