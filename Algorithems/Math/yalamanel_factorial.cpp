#include<stdio.h>
#include<stdlib.h>

int main (){

int i,x,fact;
printf("Enter a number : ");
scanf("%d", &x);
fact=1; i=x;
while (i!=1)
 {
 	fact = fact*i;
 	i=i-1;
	}
	
printf("%d! =  %d", x,fact);

getchar(); getchar();
return (0);
}
