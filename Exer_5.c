#include <stdio.h>
#include <string.h>


int main(){
	
	char p1[50], p2[50];
	
	printf("Digite duas palavras\n");
	scanf("%s %s", p1, p2);
	printf("As palavras sao:\n");
	printf("%s - a segunda letra da string eh: %c\n", p1, p1[1]);
	printf("%s - a segunda letra da string eh: %c\n", p2, p2[1]);
	
	return 0;
}
