#include <stdio.h>
#define SIZE 5
int multiply(int arr[],int size){
    for(int i = 0; i < size; ++i){
    printf("%d",2 * arr[i]);

    }
    }
int main(){
    int arr[SIZE];
    printf("Enter the elements : ");
    for(int i = 0; i < SIZE; ++i){
        scanf("%d", &arr[i]);
    }

multiply(arr,SIZE);
return 0;
}
