#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592

int main()
{
	float raio;
	
	printf("DIGITE O VALOR DO RAIO\n");
	scanf("%f", &raio);
	
	printf("A area eh: %.2f", pi*(raio*raio));
	
	return 0;
}

