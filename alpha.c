#include <stdio.h>
char is_alpha(int alpha){
if(alpha >= 'A' && alpha <= 'z'){
    printf("true");
}
   else{ printf("false");
   }
}
int main(){
    char alpha = 0;
    printf("Enter the symbol : ");
    scanf("%c", &alpha);
    is_alpha(alpha);
    return 0;
}
