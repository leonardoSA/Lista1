#include <stdio.h>
#include <stdlib.h>

int main(){

	float altu, pesoId, peso;
	char sexo;
	
	printf("DIGITE O SEU SEXO: (M) - MASCULINO E (F) - FEMININO\n");
	scanf("%c",&sexo);
	printf("DIGITE SUA ALTURA\n");
	scanf("%f",&altu);
	printf("DIGITE O SEU PESO\n");
	scanf("%f",&peso);
	
	if ((sexo=='M') || (sexo=='m')){
		pesoId=((72.2*altu) - 58);
		printf("O SEU PESO IDEAL E: %.2f KG\n", pesoId);}
	
	else{
		pesoId=((62.1*altu) - 44.7);
		printf("O SEU PESO IDEAL E: %.2f KG\n", pesoId);}
	
	if(peso>pesoId)
		printf("VOCE ESTA ACIMA DO PESO !\n");
	if(peso<pesoId)
		printf("VOCE ESTA ABAIXO DO PESO !\n");
	else
		printf("VOCE ESTA COM O PESO IDEAL !\n");	
		
return 0;
}

