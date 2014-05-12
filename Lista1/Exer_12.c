#include <stdio.h>
#include <stdlib.h>


int main(){

	float salHor,HorTrab,salMes;
	
	printf("INFORME QUANTO VOCE GANHA POR HORA\n");
	scanf("%f", &salHor);
	printf("INFORME QUANTAS HORAS VOCE TRABALHA POR MES\n");
	scanf("%f", &HorTrab);
	
	salMes=salHor*HorTrab;
	printf("O SALARIO TOTAL DO MES E: R$ %.2f", salMes);
	
	return 0;
}

