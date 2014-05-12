#include <stdio.h>
#include <stdlib.h>

int main()
{
	float Tfaren, TCel;
	
	printf("DIGITE A TEMPERATURA EM FARENHEIT\n");
	scanf("%f", &Tfaren);
	
	TCel=(5*(Tfaren-32)/9.0);
	printf("A TEMPERATURA DE %.2f FARENHEIT EQUIVALE A %.2f CELSIUS.\n",Tfaren,TCel);
	
	
	return 0;
}

