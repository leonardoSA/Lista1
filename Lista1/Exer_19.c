/* 19. Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. 
Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda,
8% para o INSS e 5% para o sindicato, faça um programa que nos dê:
a. salário bruto.
b. quanto pagou ao INSS.
c. quanto pagou ao sindicato.
d. o salário líquido.
e. calcule os descontos e o salário líquido, conforme a tabela abaixo:
g. Obs.: Salário Bruto - Descontos = Salário Líquido.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	float g_hora,Hor_trab,salBrut,salLiq,d_INSS,d_sindic,d_ImposRen;
	
	printf("DIGITE QUANTO VOCE GANHA POR HORA\n");
	scanf("%f",&g_hora);
	printf("DIGITE QUANTAS HORAS VOCE TRABALHA POR MES\n");
	scanf("%f",&Hor_trab);
	
	salBrut=g_hora*Hor_trab;
	d_ImposRen=salBrut/11.0;
	d_INSS=salBrut/8.0;
	d_sindic=salBrut/5.0;
	salLiq=(salBrut-(d_ImposRen+d_INSS+d_sindic));
	printf("O SALARIO BRUTO E: R$ %.2f\n",salBrut);
	printf("O DESCONTO DO IMPOSTO DE RENDA E: R$ %.2f\n",d_ImposRen);
	printf("O DESCONTO DO INSS E: R$ %.2f\n",d_INSS);
	printf("O DESCONTO DO SINDICATO E: R$ %.2f\n",d_sindic);
	printf("O SALARIO LIQUIDO E: R$ %.2f\n",salLiq);
	
	return 0;
}

