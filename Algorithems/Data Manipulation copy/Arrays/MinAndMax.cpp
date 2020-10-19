#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int T[100],n,i,min,max;
	
	do
	{
		printf("Donnez la taille du tableau: ");
		scanf("%d",&n);
	} while (n<=0 || n>100);
	
	for (i=0; i<n; i++)
	{
		printf("T[%d]= ",i);
		scanf("%d",&T[i]);
	}
	min=T[0]; max=T[0];
	
	for(i=1; i<n; i++)
	{
		if (T[i]>max) max=T[i];
		else if (T[i]<min) min=T[i];
	}
	
	printf("Min= %d.\n",min);
	printf("Max= %d.\n",max);
	
	
	return(0);
	
}
