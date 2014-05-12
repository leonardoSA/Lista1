#include <stdio.h>
#include <stdlib.h>

int main()
{
	float Lquad, ArQuad;
	
	printf("DIGITE O LADO DO QUADRADO\n");
	scanf("%f", &Lquad);
	
	ArQuad=Lquad*Lquad;
	printf("A area do quadrado eh: %.1f\n", ArQuad);
	printf("O dobro da area eh: %.1f\n", 2*ArQuad);
	
	
	return 0;
}

