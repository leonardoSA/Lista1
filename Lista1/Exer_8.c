#include <stdio.h>
#include <stdlib.h>

int main()
{
	float num,num2,num3,num4;
	
	printf("Digite 4 notas\n");
	scanf("%f", &num);
	scanf("%f", &num2);
	scanf("%f", &num3);
	
	scanf("%f", &num4);
	printf("A media eh: %.2f\n",((num+num2+num3+num4)/4.0));
	
	return 0;
}

