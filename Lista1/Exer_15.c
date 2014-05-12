/*
15. Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
a. o produto do dobro do primeiro com metade do segundo .
b. a soma do triplo do primeiro com o terceiro.
c. o terceiro elevado ao cubo.*/
 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	float c, resul1, resul2, resul3;
	
	printf("DIGITE DOIS NUMEROS INTEIROS\n");
	scanf("%d\n",&a);
	scanf("%d",&b);
	printf("DIGITE UM NUMERO INTEIRO\n");
	scanf("%f",&c);
	
	resul1=((a*a)*(b/2.0));
	resul2=((a*3)+c);
	resul3=(c*c*c);
	printf("o produto do dobro do primeiro com metade do segundo e: %.2f\n",resul1);
	printf("a soma do triplo do primeiro com o terceiro e: %.2f\n",resul2);
	printf("o terceiro elevado ao cubo e: %.2f\n",resul3);
	
	return 0;
}

