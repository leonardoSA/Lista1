#include <stdio.h>

int main()
{
	float Tarq, VNet,TempDow;
	
	printf("DIGITE O TAMANHO DO ARQUIVO\n");
	scanf("%f",&Tarq);
	printf("DIGITE A VELOCIDADE DA INTERNET\n");
	scanf("%f",&VNet);
	
	TempDow=Tarq/VNet;
	if(TempDow>=60)
		TempDow=TempDow/60;
	printf("O TEMPO APROXIMADO DE DOWNLOAD E: %.2f MINUTO(S)",TempDow);
	
	return 0;
}

