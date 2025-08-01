#include <stdio.h>
int swap(int a, int b) {
    int tmp = 0;
    tmp = a;
    a = b;
    b = tmp;
    printf("%d %d", a, b);
    
}
int main() {
    int a = 0;
    int b = 0;
    printf("Enter the numbers : ");
    scanf("%d %d", &a, &b );
    swap(a,b);
    return 0;
}
