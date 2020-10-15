#include <stdio.h>
#include <stdlib.h>

int main()
{
	int T[100],n,i,x;
	bool sorted;
	
	do
	{
		printf("Donner une valeur a n: ");
		scanf("%d",&n);
	} while(n<0 || n>100);
	
	for(i=0; i<n; i++)
	{
		printf("T[%d]= ",i);
		scanf("%d",&T[i]);
	}
	
	do
	{
		sorted= true;
		for(i=0; i<n-1; i++)
		{
			if (T[i] > T[i+1])
			{
				x= T[i];
				T[i]= T[i+1];
				T[i+1] = x;
				sorted= false;
			}
			
		} ;
		
		
	} while( sorted==false);
	printf("\n\nHere is the new array: \n");
	for(i=0; i<n; i++)
	{
		printf("T[%d]= %d \n",i,T[i]);
	}
	
	return(0);
	
	
}
