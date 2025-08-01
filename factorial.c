#include <stdio.h>
int factorial(int number){
    int result = 1;
    for(int i = 1; i <= number; ++i){
        result *= i;
    }
    printf("%d", result);
}
int main() {
    int number = 0;
    printf("Enter the number : ");
    scanf("%d", &number);
    factorial(number);
    return 0;
}
