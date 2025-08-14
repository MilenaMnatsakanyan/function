#include <stdio.h>
#include <string.h>
char upercase(char word[] , int i){
	if(i == strlen(word)){
			printf("There is no uppercase : ");
			return 0;
			}
	if(word[i] >= 'A' && word[i] <= 'Z'){
		return word[i];
	}
	return upercase(word, i + 1);

}

int main() {
	char word[] = "Barev";
	int i = 0;
	char res = upercase(word, i);

	if (res != 0)
	printf("The first uperase character is: %c\n", res);
			return 0;

}
