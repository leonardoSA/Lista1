#include <stdio.h>
#include <stdlib.h>

int main()
{
	float altu, peso;
	
	printf("DIGITE SUA ALTURA\n");
	scanf("%f",&altu);
	
	peso=((72.2*altu) - 58);
	printf("O SEU PESO IDEAL E: %.2f KG", peso);
	
	
	return 0;
}

