#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char ch[256],c;
	int n,i,j;
	bool palindrome;
	
	do 
	{
		printf("Inserez une chaine de caracteres: ");
		gets(ch);
	} while( strlen(ch)<=0 || strlen(ch)>256);
	
	palindrome= true;
	n=strlen(ch);
	j=n-1;
	i=0;
	
	while (i<=n/2 && palindrome== true)
	{
		if (ch[i]==ch[j]) 
		{
			i++; j--;
		}
		else palindrome= false;
	}
	
	if(palindrome== true) printf("Cette chaine est palindrome");
	else printf("cette chaine n'est pas palindrome");
	
	return(0);
}
