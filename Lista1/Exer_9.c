#include <stdio.h>
#include <stdlib.h>

int main()
{
	float M,C;
	
	printf("DIGITE A QUANTIDADE DE METROS\n");
	scanf("%f",&M);
	
	C=M*100;
	printf("%.2f Metro(s) equivalem a %.2f Centimetro(s)\n", M,C);
	
	
	return 0;
}

