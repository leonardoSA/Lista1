/* 18. João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho.
Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo (50 quilos) 
deve pagar uma multa de R$ 4,00 por quilo excedente. 
João precisa que você faça um programa que leia a variável peso (peso de peixes) e verifique se há excesso. 
Se houver, gravar na variável excesso e na variável multa o valor da multa que João deverá pagar.
Caso contrário mostrar tais variáveis com o conteúdo ZERO.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float kgP, multa=0, exesso=0;
	
	printf("DIGITE O PESO DOS PEIXES\n");
	scanf("%f",&kgP);
	
	if(kgP>50){
		exesso=kgP-50;
		multa=exesso*4;}
	printf("O EXESSO DE QUILO(S) E: %.2f KG\n", exesso);
	printf("A MULTA E: R$ %.2f\n", multa);
		
	return 0;
}

