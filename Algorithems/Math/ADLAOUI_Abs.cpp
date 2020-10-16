#include <stdio.h>

int main()
{
	float x;
	
	printf("Donnez une valeur a x: ");
	scanf("%f",&x);
	if (x>=0) printf("La valeur absolue de %f est: %f.",x,x);
	else printf("La valeur absolue de %f est %f.",x,-x);
		
	return (0);
}
