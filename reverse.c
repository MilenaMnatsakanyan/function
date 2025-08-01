#include <stdio.h>
int reverse(int number){
    int rev = 0;
    while(number > 0){
        rev = rev * 10 + number % 10;
        number /= 10;

    }
    printf("%d", rev);
}
int main() {
    int number = 0;
    printf("Enter the number : ");
    scanf("%d", &number);
    reverse(number);
    return 0;
}
